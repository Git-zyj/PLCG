#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7891911109207714055ULL;
unsigned long long int var_3 = 14937683999643865713ULL;
long long int var_5 = -4858010421362528370LL;
long long int var_6 = -7411107044008721905LL;
short var_10 = (short)-5945;
unsigned long long int var_11 = 10363703216623948336ULL;
unsigned long long int var_14 = 2222761599084943971ULL;
int zero = 0;
unsigned long long int var_16 = 13885146161500844773ULL;
unsigned short var_17 = (unsigned short)55689;
unsigned int var_18 = 406686115U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
