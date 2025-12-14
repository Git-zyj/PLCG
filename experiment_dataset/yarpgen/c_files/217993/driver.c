#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23643;
unsigned long long int var_2 = 18207795448924419116ULL;
unsigned int var_7 = 372252618U;
int var_10 = -896135616;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-3;
unsigned int var_16 = 2357328728U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)76;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)49306;
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
