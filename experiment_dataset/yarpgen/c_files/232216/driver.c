#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -5664608272379401124LL;
unsigned long long int var_3 = 12320855737986094319ULL;
_Bool var_4 = (_Bool)1;
int var_5 = -268782728;
_Bool var_6 = (_Bool)1;
long long int var_7 = 541588280907924490LL;
_Bool var_8 = (_Bool)1;
int var_9 = -226206740;
unsigned short var_10 = (unsigned short)61791;
signed char var_11 = (signed char)-8;
signed char var_12 = (signed char)-64;
int zero = 0;
long long int var_13 = 4153271291166750174LL;
unsigned short var_14 = (unsigned short)54066;
long long int var_15 = 3510423574695618706LL;
unsigned short var_16 = (unsigned short)14842;
unsigned char var_17 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
