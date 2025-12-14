#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8502624379950296907LL;
int var_1 = -1564941668;
short var_2 = (short)18761;
int var_3 = -1757255840;
short var_5 = (short)25883;
int var_6 = -2041752927;
unsigned long long int var_7 = 10770985306702514202ULL;
int var_10 = -898697503;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 1314582277393273816ULL;
long long int var_16 = 35431524771814973LL;
unsigned int var_17 = 2916815564U;
int var_18 = 1715023312;
unsigned int var_19 = 233804912U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
