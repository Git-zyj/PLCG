#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7551;
signed char var_3 = (signed char)53;
unsigned long long int var_5 = 10800705036221986950ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)39485;
unsigned int var_8 = 942634961U;
unsigned short var_10 = (unsigned short)56259;
unsigned int var_11 = 1658922037U;
unsigned int var_14 = 476478248U;
unsigned int var_16 = 52724859U;
unsigned short var_17 = (unsigned short)32339;
int zero = 0;
short var_18 = (short)31917;
long long int var_19 = -4639531546355032380LL;
long long int var_20 = 3141771955083239689LL;
unsigned int var_21 = 1390689122U;
_Bool var_22 = (_Bool)0;
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
