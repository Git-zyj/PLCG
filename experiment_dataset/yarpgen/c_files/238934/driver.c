#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)30216;
unsigned int var_6 = 2327533111U;
short var_7 = (short)22334;
int var_9 = 882071134;
short var_13 = (short)12554;
int zero = 0;
unsigned long long int var_14 = 18379270807985439167ULL;
int var_15 = 1124875450;
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
