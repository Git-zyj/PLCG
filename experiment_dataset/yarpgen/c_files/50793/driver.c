#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)51;
long long int var_2 = -7666828234802386925LL;
long long int var_4 = -478883127040551309LL;
unsigned int var_6 = 1026800623U;
unsigned char var_8 = (unsigned char)241;
long long int var_10 = 3473611892390944723LL;
int zero = 0;
unsigned char var_11 = (unsigned char)49;
short var_12 = (short)15296;
unsigned char var_13 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
