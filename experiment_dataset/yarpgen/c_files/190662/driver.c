#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)20951;
signed char var_2 = (signed char)-111;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 12920032773965922468ULL;
short var_6 = (short)19332;
unsigned short var_7 = (unsigned short)5875;
long long int var_8 = 176164786087499744LL;
int var_10 = 1131362219;
unsigned short var_11 = (unsigned short)59049;
unsigned long long int var_14 = 13961833275417748751ULL;
short var_15 = (short)24301;
int zero = 0;
long long int var_16 = -4849550087035301174LL;
short var_17 = (short)-20151;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-43;
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
