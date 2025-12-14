#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-38;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 2457573737U;
long long int var_9 = 3094793987080468366LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2531608881U;
long long int var_12 = 5869078860259063639LL;
signed char var_13 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
