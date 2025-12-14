#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1096372828;
_Bool var_5 = (_Bool)1;
long long int var_8 = -2778485998135992247LL;
unsigned short var_9 = (unsigned short)14270;
int var_10 = -544195750;
signed char var_11 = (signed char)112;
long long int var_13 = 6936685047532971048LL;
long long int var_14 = 705100221201337234LL;
unsigned short var_17 = (unsigned short)17374;
int zero = 0;
short var_19 = (short)4270;
long long int var_20 = -5743653245728558307LL;
unsigned long long int var_21 = 15118991512367822130ULL;
unsigned short var_22 = (unsigned short)1132;
void init() {
}

void checksum() {
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
