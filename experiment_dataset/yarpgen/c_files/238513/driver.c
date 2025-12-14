#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2449884896274122089LL;
signed char var_3 = (signed char)-105;
unsigned int var_8 = 3721543721U;
int var_9 = -471904022;
short var_10 = (short)23000;
short var_12 = (short)3529;
unsigned int var_14 = 2455674679U;
unsigned short var_15 = (unsigned short)45583;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)18666;
short var_19 = (short)-472;
short var_20 = (short)23324;
unsigned int var_21 = 2665095681U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
