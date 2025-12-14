#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-111;
unsigned long long int var_3 = 5482475393079661186ULL;
int var_5 = -20453590;
int var_8 = 396278728;
int zero = 0;
unsigned int var_10 = 220215627U;
unsigned char var_11 = (unsigned char)39;
signed char var_12 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
