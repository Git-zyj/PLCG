#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
signed char var_4 = (signed char)-105;
short var_8 = (short)9412;
unsigned short var_12 = (unsigned short)42825;
short var_13 = (short)1095;
unsigned char var_14 = (unsigned char)252;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 16421186974773981912ULL;
long long int var_17 = -965382080225871737LL;
short var_18 = (short)21033;
unsigned int var_19 = 649191062U;
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
