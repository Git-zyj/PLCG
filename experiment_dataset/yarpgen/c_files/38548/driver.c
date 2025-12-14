#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -867848271;
unsigned short var_1 = (unsigned short)35375;
unsigned int var_2 = 3483673026U;
unsigned long long int var_3 = 14867119552555166462ULL;
int zero = 0;
unsigned long long int var_12 = 266340868927484067ULL;
unsigned long long int var_13 = 3009191065597437010ULL;
void init() {
}

void checksum() {
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
