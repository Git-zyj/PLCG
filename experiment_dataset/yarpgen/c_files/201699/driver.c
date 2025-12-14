#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26311;
unsigned long long int var_8 = 2910794531161558395ULL;
unsigned int var_9 = 1405619586U;
int zero = 0;
unsigned long long int var_13 = 16714230989781118788ULL;
unsigned long long int var_14 = 13863720220959289515ULL;
unsigned long long int var_15 = 984473196672089893ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
