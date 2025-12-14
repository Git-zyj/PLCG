#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
signed char var_3 = (signed char)-30;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 11684836919857566043ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)23934;
unsigned long long int var_8 = 5409934581974229197ULL;
int var_10 = -143697576;
_Bool var_11 = (_Bool)0;
long long int var_12 = -316114909328002768LL;
short var_13 = (short)-12375;
int zero = 0;
unsigned short var_16 = (unsigned short)5604;
signed char var_17 = (signed char)108;
unsigned short var_18 = (unsigned short)18762;
unsigned short var_19 = (unsigned short)63976;
unsigned char var_20 = (unsigned char)207;
int var_21 = -102088979;
int var_22 = -1709028541;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
