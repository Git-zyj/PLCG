#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3776361153637525356ULL;
unsigned long long int var_9 = 13928670316261386265ULL;
short var_13 = (short)-24020;
int zero = 0;
short var_19 = (short)-7873;
short var_20 = (short)4767;
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
