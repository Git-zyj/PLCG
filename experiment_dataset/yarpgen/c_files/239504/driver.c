#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2619598255U;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 4062395834U;
long long int var_10 = 7681896494038476871LL;
int var_12 = 1010103675;
unsigned char var_13 = (unsigned char)72;
int var_14 = 425845636;
int zero = 0;
long long int var_15 = -7138192154390608434LL;
short var_16 = (short)4977;
int var_17 = 398149621;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
