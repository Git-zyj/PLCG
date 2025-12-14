#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
long long int var_3 = -3013728959120389313LL;
short var_4 = (short)16310;
unsigned long long int var_5 = 15562262092776830539ULL;
short var_6 = (short)-9823;
unsigned short var_7 = (unsigned short)20785;
unsigned short var_10 = (unsigned short)55063;
short var_11 = (short)29461;
unsigned int var_13 = 167381941U;
unsigned int var_15 = 3643056894U;
unsigned int var_16 = 1624544102U;
int zero = 0;
signed char var_17 = (signed char)-54;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 519849414U;
unsigned long long int var_20 = 6946198846055005956ULL;
void init() {
}

void checksum() {
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
