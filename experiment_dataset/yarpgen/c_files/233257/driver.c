#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1631937004;
unsigned long long int var_3 = 18358784177707214829ULL;
int var_5 = 1506033388;
int var_7 = -338337801;
int var_9 = 1679459076;
unsigned long long int var_11 = 11833068350964312596ULL;
unsigned int var_12 = 1693425436U;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -2091812307173863847LL;
unsigned short var_15 = (unsigned short)29220;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)16510;
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
