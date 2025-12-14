#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61566;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
long long int var_3 = 7397108089201086444LL;
unsigned long long int var_4 = 9985138342297366041ULL;
unsigned char var_5 = (unsigned char)245;
short var_6 = (short)15058;
unsigned short var_8 = (unsigned short)32517;
unsigned long long int var_10 = 15150277731940934436ULL;
short var_11 = (short)-14613;
unsigned long long int var_13 = 9316822296025866336ULL;
unsigned char var_16 = (unsigned char)147;
long long int var_17 = 5879111787764340649LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)10246;
void init() {
}

void checksum() {
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
