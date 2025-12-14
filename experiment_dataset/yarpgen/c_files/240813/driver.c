#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3775;
unsigned char var_2 = (unsigned char)254;
signed char var_4 = (signed char)90;
short var_5 = (short)855;
_Bool var_8 = (_Bool)1;
short var_12 = (short)21017;
unsigned int var_14 = 2971225154U;
int zero = 0;
short var_18 = (short)-10637;
signed char var_19 = (signed char)-23;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
