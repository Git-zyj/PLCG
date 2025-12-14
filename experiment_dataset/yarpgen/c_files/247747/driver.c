#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5551017654112809495LL;
unsigned long long int var_1 = 14980806263815040485ULL;
unsigned short var_2 = (unsigned short)47725;
unsigned long long int var_3 = 11941998278708229397ULL;
unsigned long long int var_4 = 14393387844246397244ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)59526;
unsigned long long int var_11 = 15803827971368827483ULL;
signed char var_12 = (signed char)-26;
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
