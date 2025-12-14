#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7504;
unsigned short var_1 = (unsigned short)17765;
signed char var_3 = (signed char)68;
unsigned short var_7 = (unsigned short)47595;
unsigned int var_9 = 2625299666U;
long long int var_10 = 9210998791646518243LL;
int zero = 0;
unsigned long long int var_12 = 14210184414603289903ULL;
unsigned short var_13 = (unsigned short)28509;
unsigned int var_14 = 256419112U;
int var_15 = 1162758512;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
