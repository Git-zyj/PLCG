#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_7 = (unsigned char)32;
unsigned long long int var_8 = 9787168654887802229ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)21394;
unsigned int var_16 = 4123971657U;
int zero = 0;
unsigned int var_18 = 1138111427U;
long long int var_19 = -2730390309461952385LL;
unsigned short var_20 = (unsigned short)9049;
signed char var_21 = (signed char)17;
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
