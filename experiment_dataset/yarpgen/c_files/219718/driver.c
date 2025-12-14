#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 716084253252020047LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 4130032822297314752ULL;
unsigned short var_3 = (unsigned short)44905;
long long int var_4 = -6727689099743074636LL;
short var_8 = (short)7607;
unsigned char var_13 = (unsigned char)191;
int zero = 0;
int var_14 = 235399077;
unsigned int var_15 = 2742226196U;
unsigned char var_16 = (unsigned char)172;
unsigned long long int var_17 = 4523911726776952850ULL;
short var_18 = (short)-9809;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
