#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45262;
int var_5 = 1388280420;
long long int var_6 = 4456228151399799389LL;
unsigned long long int var_8 = 14191894707004181875ULL;
int var_9 = -1626444901;
unsigned long long int var_11 = 8519278413789296369ULL;
unsigned long long int var_12 = 1467045991997517645ULL;
int var_13 = -212469332;
unsigned long long int var_14 = 2150897709113412955ULL;
unsigned char var_17 = (unsigned char)66;
int zero = 0;
unsigned int var_18 = 1799402654U;
signed char var_19 = (signed char)-36;
long long int var_20 = 3715918317166399885LL;
signed char var_21 = (signed char)81;
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
