#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
long long int var_2 = -5121049930928481477LL;
long long int var_3 = -231458069116555568LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)40;
unsigned long long int var_7 = 11410560357600267841ULL;
short var_8 = (short)32595;
unsigned char var_9 = (unsigned char)77;
int zero = 0;
unsigned int var_10 = 1531606431U;
long long int var_11 = 7324795042545273988LL;
int var_12 = -74150493;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)186;
short var_16 = (short)-14764;
short var_17 = (short)-23044;
unsigned short var_18 = (unsigned short)46775;
long long int var_19 = 4076306918351726227LL;
unsigned char var_20 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
