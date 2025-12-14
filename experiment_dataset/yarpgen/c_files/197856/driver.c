#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3290806916U;
int var_1 = 851494580;
int var_2 = 887496961;
unsigned int var_3 = 2267462980U;
signed char var_5 = (signed char)-78;
signed char var_6 = (signed char)84;
signed char var_8 = (signed char)-111;
short var_9 = (short)-18922;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)56941;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3931041630910218798LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)24;
int zero = 0;
unsigned char var_18 = (unsigned char)65;
unsigned long long int var_19 = 8646597838341483451ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 388915062U;
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
