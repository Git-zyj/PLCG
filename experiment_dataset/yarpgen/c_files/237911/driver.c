#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-7460;
unsigned int var_5 = 2194929562U;
signed char var_6 = (signed char)-62;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3784167973778892426ULL;
unsigned long long int var_10 = 17073887784904875365ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)232;
unsigned char var_14 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
