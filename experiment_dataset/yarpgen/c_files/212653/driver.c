#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12617255443286378448ULL;
unsigned long long int var_9 = 4504235551088823262ULL;
int zero = 0;
unsigned long long int var_13 = 9521512644945605011ULL;
long long int var_14 = -7006596782210642458LL;
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
