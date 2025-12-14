#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17070576807491567489ULL;
short var_4 = (short)-20527;
unsigned char var_5 = (unsigned char)148;
int var_6 = 1266204044;
_Bool var_8 = (_Bool)0;
short var_11 = (short)29107;
long long int var_14 = -287770067081516963LL;
long long int var_15 = -7757177063582060658LL;
int zero = 0;
signed char var_16 = (signed char)-68;
signed char var_17 = (signed char)-54;
long long int var_18 = 3101136676163071821LL;
unsigned short var_19 = (unsigned short)33681;
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
