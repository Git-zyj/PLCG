#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46027;
signed char var_5 = (signed char)-78;
unsigned int var_8 = 3923616039U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 185400647U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 429801601U;
unsigned int var_19 = 3936512290U;
unsigned int var_20 = 931320668U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
