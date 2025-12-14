#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)56034;
unsigned short var_7 = (unsigned short)20573;
_Bool var_9 = (_Bool)1;
int var_12 = -774844791;
int zero = 0;
signed char var_14 = (signed char)-124;
unsigned long long int var_15 = 15566967298873391948ULL;
signed char var_16 = (signed char)31;
unsigned int var_17 = 4217883947U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
