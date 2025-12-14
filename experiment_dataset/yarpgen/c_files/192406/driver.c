#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -197037678862801481LL;
long long int var_4 = -3000351559907752148LL;
unsigned long long int var_6 = 17122826220855593484ULL;
unsigned long long int var_10 = 5028419963882026489ULL;
unsigned long long int var_12 = 16673287488121222456ULL;
unsigned int var_14 = 3381633938U;
long long int var_15 = 8199660621594980596LL;
unsigned int var_17 = 2758607878U;
int zero = 0;
unsigned int var_19 = 199385837U;
unsigned char var_20 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
