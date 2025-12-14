#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2631106114U;
unsigned int var_4 = 1127912444U;
unsigned int var_12 = 632183327U;
unsigned int var_15 = 409735161U;
unsigned long long int var_16 = 15409996477247322478ULL;
long long int var_17 = 7199594929313077283LL;
int zero = 0;
unsigned int var_18 = 590175384U;
unsigned int var_19 = 3659157284U;
unsigned long long int var_20 = 13675848911822700254ULL;
long long int var_21 = 3212983070658938349LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
