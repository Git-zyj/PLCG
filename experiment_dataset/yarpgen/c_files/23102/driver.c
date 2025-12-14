#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 891350846;
signed char var_1 = (signed char)3;
signed char var_4 = (signed char)93;
unsigned int var_5 = 1659994007U;
unsigned int var_7 = 2182254844U;
_Bool var_9 = (_Bool)1;
int var_10 = 627634275;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 12656957288283063571ULL;
unsigned char var_14 = (unsigned char)231;
short var_15 = (short)-14660;
long long int var_17 = 5605147744650447551LL;
int zero = 0;
unsigned char var_18 = (unsigned char)178;
unsigned char var_19 = (unsigned char)7;
unsigned short var_20 = (unsigned short)62010;
long long int var_21 = -4851745218898543114LL;
signed char var_22 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
