#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 12349054524077460646ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_17 = -1921720956;
signed char var_18 = (signed char)110;
signed char var_19 = (signed char)-65;
int var_20 = -1962014459;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
