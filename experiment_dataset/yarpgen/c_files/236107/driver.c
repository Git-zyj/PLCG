#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)51;
unsigned short var_5 = (unsigned short)47247;
signed char var_8 = (signed char)-19;
unsigned short var_9 = (unsigned short)11862;
int var_12 = -1391571763;
unsigned short var_13 = (unsigned short)24744;
unsigned int var_14 = 312008791U;
int zero = 0;
short var_17 = (short)14228;
long long int var_18 = -5535974816790985237LL;
int var_19 = 2069375806;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
