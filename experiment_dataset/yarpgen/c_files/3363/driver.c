#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-10145;
unsigned int var_6 = 2633985737U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_14 = 2561624377004246874ULL;
int zero = 0;
unsigned int var_15 = 457132729U;
signed char var_16 = (signed char)-106;
unsigned int var_17 = 1575811097U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
