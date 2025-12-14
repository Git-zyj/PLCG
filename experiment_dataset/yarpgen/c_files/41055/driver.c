#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5530;
unsigned long long int var_5 = 6337925555746384468ULL;
short var_6 = (short)29056;
unsigned char var_7 = (unsigned char)159;
unsigned long long int var_14 = 12859574265118506535ULL;
int var_15 = 1717018522;
int zero = 0;
short var_17 = (short)-12907;
short var_18 = (short)-31242;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2902260771584899584LL;
signed char var_21 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
