#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1895061803;
long long int var_4 = -5931136900409439088LL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)4;
int var_11 = -1145507127;
unsigned int var_14 = 777247150U;
int zero = 0;
int var_16 = -1475367410;
_Bool var_17 = (_Bool)1;
short var_18 = (short)31302;
int var_19 = 32641729;
int var_20 = 1215692953;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
