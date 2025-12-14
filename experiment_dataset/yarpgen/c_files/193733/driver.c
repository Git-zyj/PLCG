#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1747950196U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)2780;
signed char var_4 = (signed char)-88;
long long int var_5 = 5161777540266769992LL;
int var_7 = -566918546;
unsigned int var_8 = 312433291U;
short var_9 = (short)24767;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)31945;
int zero = 0;
short var_12 = (short)1511;
unsigned short var_13 = (unsigned short)57567;
unsigned int var_14 = 2825401790U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
