#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)74;
long long int var_2 = -7170159841225399482LL;
unsigned long long int var_6 = 2879034590470022311ULL;
int zero = 0;
unsigned int var_14 = 4187700733U;
long long int var_15 = 5781580455673470330LL;
void init() {
}

void checksum() {
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
