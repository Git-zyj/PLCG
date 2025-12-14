#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10860263199141654285ULL;
unsigned int var_2 = 3717071652U;
unsigned char var_3 = (unsigned char)7;
int var_4 = -1584706763;
int var_5 = 1866581405;
signed char var_7 = (signed char)51;
_Bool var_8 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 376385147201918151ULL;
short var_19 = (short)-20745;
unsigned int var_20 = 3414641490U;
long long int var_21 = 6760495690823474187LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
