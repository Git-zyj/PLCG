#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1490031270;
unsigned int var_4 = 4294683342U;
int var_5 = 446534169;
unsigned long long int var_7 = 11737256028055992426ULL;
int zero = 0;
int var_14 = -1089090403;
unsigned short var_15 = (unsigned short)22641;
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
