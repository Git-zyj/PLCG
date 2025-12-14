#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_9 = (short)2329;
int var_12 = 801838301;
int var_15 = 639878543;
long long int var_17 = -1473345104577606952LL;
int var_18 = 1720668347;
int zero = 0;
unsigned char var_19 = (unsigned char)207;
unsigned int var_20 = 4078324139U;
signed char var_21 = (signed char)75;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1021312459U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
