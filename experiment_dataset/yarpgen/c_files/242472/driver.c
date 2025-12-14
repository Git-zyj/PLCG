#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned long long int var_5 = 14875530351806601282ULL;
unsigned long long int var_7 = 6317068370991129936ULL;
unsigned long long int var_11 = 14576141498756043797ULL;
int zero = 0;
unsigned int var_20 = 3211925454U;
unsigned char var_21 = (unsigned char)48;
void init() {
}

void checksum() {
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
