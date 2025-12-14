#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)252;
unsigned long long int var_4 = 11660645612520464511ULL;
unsigned long long int var_6 = 2845782910762247797ULL;
unsigned long long int var_7 = 121172920983497946ULL;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
unsigned long long int var_15 = 10461016770410216990ULL;
unsigned char var_16 = (unsigned char)166;
unsigned long long int var_17 = 18343831285514688655ULL;
unsigned char var_18 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
