#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 659241330604589635ULL;
int var_4 = -1767290212;
unsigned short var_5 = (unsigned short)51769;
int var_8 = -2095574362;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3740872435U;
unsigned long long int var_13 = 15625432172484603841ULL;
short var_16 = (short)32116;
long long int var_17 = -5576096600630497879LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-14421;
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
