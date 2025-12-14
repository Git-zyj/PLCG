#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
long long int var_2 = -5066997660702248381LL;
unsigned short var_4 = (unsigned short)54586;
unsigned short var_5 = (unsigned short)10115;
long long int var_8 = 3112170232003986761LL;
short var_10 = (short)15136;
short var_15 = (short)-31310;
short var_16 = (short)-9833;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = 4226964595694936218LL;
unsigned short var_20 = (unsigned short)10857;
int var_21 = 1817183424;
long long int var_22 = 373416134939582092LL;
short var_23 = (short)-12955;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
