#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned long long int var_1 = 8270653601735287493ULL;
long long int var_2 = 7138209043192866385LL;
unsigned char var_3 = (unsigned char)36;
short var_4 = (short)25359;
int var_5 = -1736350493;
long long int var_6 = 4966082613955157776LL;
signed char var_7 = (signed char)115;
short var_8 = (short)-12176;
unsigned short var_9 = (unsigned short)60711;
_Bool var_10 = (_Bool)1;
short var_11 = (short)5413;
int zero = 0;
unsigned short var_12 = (unsigned short)15860;
unsigned short var_13 = (unsigned short)19114;
int var_14 = -488615884;
unsigned long long int var_15 = 13001588972792879680ULL;
unsigned int var_16 = 3030662431U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
