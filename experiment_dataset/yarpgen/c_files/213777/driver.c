#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3487778411629836815LL;
long long int var_1 = -6328767534024822096LL;
short var_2 = (short)-17727;
long long int var_3 = -318449562344458300LL;
unsigned short var_4 = (unsigned short)35126;
_Bool var_5 = (_Bool)0;
long long int var_6 = -7236652611732220925LL;
signed char var_7 = (signed char)20;
signed char var_8 = (signed char)-36;
unsigned short var_9 = (unsigned short)14897;
short var_10 = (short)-7163;
unsigned short var_11 = (unsigned short)665;
unsigned char var_13 = (unsigned char)153;
unsigned long long int var_15 = 11810967435332182883ULL;
int zero = 0;
long long int var_16 = 5682787565620995273LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -993755569326037855LL;
unsigned short var_19 = (unsigned short)48723;
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
