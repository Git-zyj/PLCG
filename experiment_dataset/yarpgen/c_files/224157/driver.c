#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1243347270655458981ULL;
long long int var_3 = -8737737191049697642LL;
unsigned int var_4 = 790948037U;
_Bool var_5 = (_Bool)1;
long long int var_6 = 3234385782561885152LL;
signed char var_8 = (signed char)-47;
long long int var_9 = -1330543581678046724LL;
short var_10 = (short)-13120;
unsigned long long int var_11 = 8752281128345844116ULL;
unsigned short var_12 = (unsigned short)50015;
unsigned short var_13 = (unsigned short)55537;
unsigned int var_14 = 616274380U;
int zero = 0;
unsigned long long int var_16 = 14227474398557401986ULL;
unsigned long long int var_17 = 9270667892267132646ULL;
unsigned long long int var_18 = 774561376530221733ULL;
signed char var_19 = (signed char)69;
void init() {
}

void checksum() {
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
