#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1820470592U;
unsigned short var_6 = (unsigned short)42339;
unsigned char var_8 = (unsigned char)13;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = -579952069;
unsigned short var_13 = (unsigned short)64438;
unsigned int var_14 = 120945211U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
