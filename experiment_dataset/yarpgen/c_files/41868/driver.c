#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)32682;
unsigned short var_6 = (unsigned short)9519;
long long int var_8 = 6207475959518550065LL;
short var_10 = (short)-19498;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5008270070534397624LL;
long long int var_16 = -2918809425190642772LL;
int zero = 0;
unsigned short var_17 = (unsigned short)10251;
long long int var_18 = 8433292511097024059LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3718748743U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
