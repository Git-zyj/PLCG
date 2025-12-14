#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5423679408553695077LL;
signed char var_3 = (signed char)12;
_Bool var_7 = (_Bool)1;
unsigned int var_12 = 1364626761U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-28889;
long long int var_16 = 5351886074404727749LL;
int var_17 = 1070695279;
_Bool var_18 = (_Bool)1;
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
