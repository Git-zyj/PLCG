#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24284;
signed char var_5 = (signed char)-34;
short var_6 = (short)-10313;
short var_7 = (short)15674;
long long int var_11 = -338747745957086264LL;
unsigned char var_13 = (unsigned char)169;
int zero = 0;
unsigned int var_14 = 3596758605U;
short var_15 = (short)29575;
signed char var_16 = (signed char)2;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
