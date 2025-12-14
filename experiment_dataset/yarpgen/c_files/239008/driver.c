#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17556608088209689690ULL;
unsigned int var_2 = 1136146066U;
unsigned char var_7 = (unsigned char)94;
unsigned char var_10 = (unsigned char)213;
int zero = 0;
short var_19 = (short)6690;
unsigned char var_20 = (unsigned char)122;
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
