#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 794792272U;
_Bool var_1 = (_Bool)1;
int var_3 = 1922872002;
unsigned short var_7 = (unsigned short)14782;
int var_8 = -149256449;
unsigned int var_10 = 3406127082U;
signed char var_11 = (signed char)118;
unsigned char var_14 = (unsigned char)45;
signed char var_16 = (signed char)25;
long long int var_18 = -4068617314767237548LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)213;
short var_21 = (short)-7738;
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
