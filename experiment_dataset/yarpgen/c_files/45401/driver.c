#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 568094972;
unsigned long long int var_2 = 3150630087833441124ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 426558717523811195ULL;
unsigned long long int var_5 = 7046168257329541601ULL;
unsigned short var_6 = (unsigned short)19496;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = -600888010;
unsigned long long int var_11 = 5621444655095690516ULL;
int var_12 = -346544862;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 8899659U;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
