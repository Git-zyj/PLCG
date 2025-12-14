#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -44382229;
int var_1 = 1728613100;
unsigned long long int var_3 = 12571128136699986254ULL;
int var_4 = 781214709;
int var_9 = 702965318;
int zero = 0;
unsigned long long int var_10 = 687672806185958405ULL;
unsigned short var_11 = (unsigned short)11544;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
