#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned int var_1 = 3233021256U;
short var_2 = (short)-2435;
int var_3 = 265375401;
_Bool var_4 = (_Bool)1;
long long int var_5 = 6008347988639764511LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-14444;
_Bool var_8 = (_Bool)0;
short var_9 = (short)6719;
unsigned short var_10 = (unsigned short)39997;
unsigned long long int var_11 = 4709712933710096014ULL;
unsigned int var_12 = 4008355528U;
long long int var_13 = -4771448274364765655LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3308216754U;
unsigned int var_16 = 4039092723U;
void init() {
}

void checksum() {
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
