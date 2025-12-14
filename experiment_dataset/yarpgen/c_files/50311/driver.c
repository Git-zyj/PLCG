#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7408418700903536531LL;
short var_4 = (short)13795;
unsigned int var_5 = 2993841057U;
int var_6 = -1549582055;
unsigned short var_8 = (unsigned short)52184;
unsigned int var_12 = 812477592U;
int zero = 0;
int var_18 = -1801711661;
_Bool var_19 = (_Bool)0;
long long int var_20 = 8604567302192089877LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
