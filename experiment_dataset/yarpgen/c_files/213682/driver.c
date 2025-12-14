#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52125;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-3641;
signed char var_5 = (signed char)-31;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 781102272U;
unsigned long long int var_13 = 11413363448990392822ULL;
long long int var_14 = -2648755098676344828LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7334699695316771634LL;
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
