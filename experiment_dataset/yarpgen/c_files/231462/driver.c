#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -847881218;
unsigned char var_4 = (unsigned char)178;
unsigned long long int var_5 = 1205340291387124198ULL;
int zero = 0;
signed char var_13 = (signed char)-111;
unsigned long long int var_14 = 13303699516159974392ULL;
unsigned long long int var_15 = 13459657284179005348ULL;
unsigned long long int var_16 = 5960694750222300946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
