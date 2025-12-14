#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3811603190554271365LL;
unsigned int var_7 = 2254791423U;
int zero = 0;
unsigned long long int var_17 = 13727797991206133132ULL;
int var_18 = 465126039;
unsigned long long int var_19 = 15400761331078701633ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
