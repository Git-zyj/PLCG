#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
unsigned char var_2 = (unsigned char)231;
signed char var_3 = (signed char)92;
signed char var_4 = (signed char)22;
unsigned int var_7 = 1248363079U;
signed char var_8 = (signed char)53;
long long int var_10 = -1048198426880153193LL;
unsigned int var_11 = 1504913587U;
unsigned long long int var_12 = 12079949852484609023ULL;
int zero = 0;
signed char var_15 = (signed char)84;
long long int var_16 = 2555228063076793161LL;
unsigned char var_17 = (unsigned char)153;
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
