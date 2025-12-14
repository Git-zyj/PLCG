#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1652303685;
_Bool var_2 = (_Bool)1;
long long int var_4 = 3901081858115258186LL;
signed char var_5 = (signed char)-90;
signed char var_8 = (signed char)104;
int var_12 = -1510736689;
unsigned int var_14 = 3460715127U;
unsigned short var_15 = (unsigned short)21975;
int zero = 0;
short var_17 = (short)29496;
long long int var_18 = 4228540279827267634LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
