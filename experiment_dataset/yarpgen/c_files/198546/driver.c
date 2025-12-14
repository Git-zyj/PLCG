#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -708467349;
unsigned short var_8 = (unsigned short)13647;
_Bool var_10 = (_Bool)1;
int var_15 = -259114118;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 116143698U;
int zero = 0;
unsigned char var_20 = (unsigned char)147;
unsigned short var_21 = (unsigned short)51403;
unsigned long long int var_22 = 11185130134826556876ULL;
int var_23 = 1387030284;
signed char var_24 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
