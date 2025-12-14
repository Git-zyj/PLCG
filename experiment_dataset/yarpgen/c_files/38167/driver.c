#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14183403622665155070ULL;
unsigned long long int var_6 = 5154689714245210951ULL;
int var_15 = 107777787;
int zero = 0;
int var_20 = 518547552;
unsigned int var_21 = 1485923944U;
unsigned int var_22 = 2935377705U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
