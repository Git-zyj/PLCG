#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
int var_1 = 220126550;
int var_7 = 1319941462;
signed char var_8 = (signed char)86;
unsigned int var_10 = 1967827091U;
long long int var_13 = -9192868433831377384LL;
int zero = 0;
unsigned char var_15 = (unsigned char)154;
long long int var_16 = 5364254224558289061LL;
unsigned int var_17 = 1046397045U;
long long int var_18 = -1839474972429305789LL;
unsigned int var_19 = 2566301270U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
