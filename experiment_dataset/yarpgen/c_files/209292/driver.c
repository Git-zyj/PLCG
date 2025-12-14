#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 132152886;
unsigned short var_3 = (unsigned short)30885;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)62220;
unsigned short var_11 = (unsigned short)16056;
unsigned int var_13 = 2249507696U;
int zero = 0;
long long int var_14 = -8990735427658086077LL;
unsigned long long int var_15 = 425850979688027641ULL;
short var_16 = (short)26724;
int var_17 = 729954078;
long long int var_18 = 8015112660363061998LL;
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
