#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11459;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)44291;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-1;
unsigned int var_5 = 462800731U;
signed char var_6 = (signed char)112;
int var_7 = 1706649339;
unsigned short var_8 = (unsigned short)23905;
unsigned int var_9 = 1316120359U;
int zero = 0;
signed char var_10 = (signed char)33;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-115;
signed char var_13 = (signed char)-117;
signed char var_14 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
