#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2525810270655923932ULL;
unsigned long long int var_4 = 15498782115653054472ULL;
unsigned int var_5 = 192839557U;
unsigned long long int var_6 = 15355943745423397894ULL;
unsigned int var_10 = 2902277845U;
unsigned long long int var_11 = 18139923849440178384ULL;
int zero = 0;
unsigned long long int var_14 = 17399498526967872592ULL;
unsigned long long int var_15 = 558886097226618482ULL;
unsigned long long int var_16 = 16318860997368077917ULL;
unsigned long long int var_17 = 3355609938004730234ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
