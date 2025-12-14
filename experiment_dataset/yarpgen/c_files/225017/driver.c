#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 525016545468314068ULL;
short var_2 = (short)-839;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3589875973U;
_Bool var_7 = (_Bool)0;
long long int var_10 = 7992454267692489935LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)16;
long long int var_14 = 8411700796795488278LL;
short var_15 = (short)-7815;
unsigned short var_16 = (unsigned short)20472;
long long int var_17 = -4081076323506034018LL;
int var_18 = -1693404150;
int zero = 0;
short var_20 = (short)-23131;
short var_21 = (short)12710;
unsigned int var_22 = 2807801124U;
short var_23 = (short)-2132;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
