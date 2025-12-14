#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 64615502;
unsigned int var_3 = 4257225495U;
int var_6 = 1103159919;
unsigned long long int var_10 = 9708261831647619363ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11736911096047233646ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-117;
int zero = 0;
short var_19 = (short)-29206;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)32387;
void init() {
}

void checksum() {
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
