#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2090476257U;
signed char var_2 = (signed char)-47;
unsigned char var_4 = (unsigned char)56;
short var_7 = (short)-28264;
unsigned char var_10 = (unsigned char)25;
signed char var_11 = (signed char)113;
unsigned int var_12 = 2639964926U;
_Bool var_13 = (_Bool)1;
int var_14 = 641168729;
int zero = 0;
unsigned long long int var_18 = 8286924650341096806ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
