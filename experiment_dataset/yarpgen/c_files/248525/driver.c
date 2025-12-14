#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3521188282U;
long long int var_4 = -7916539578806953094LL;
unsigned int var_8 = 3892124350U;
unsigned long long int var_12 = 4797319856488501216ULL;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8295309456769945477ULL;
short var_17 = (short)-12373;
int zero = 0;
long long int var_18 = -8826604439069325738LL;
int var_19 = 1404885272;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-67;
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
