#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11900;
long long int var_7 = 1448606880627034981LL;
unsigned long long int var_9 = 4093494570201777960ULL;
int zero = 0;
unsigned long long int var_13 = 6899923108575933362ULL;
unsigned int var_14 = 4000546861U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
