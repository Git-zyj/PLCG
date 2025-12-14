#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6120345459748092480LL;
signed char var_3 = (signed char)112;
signed char var_4 = (signed char)0;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)193;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)14642;
long long int var_9 = -758838932442115304LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -7440475780249881457LL;
long long int var_13 = 9060707353663704476LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-23304;
unsigned int var_19 = 3461740046U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
