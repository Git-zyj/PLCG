#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)51;
unsigned long long int var_6 = 6709744430150392689ULL;
unsigned short var_7 = (unsigned short)26343;
long long int var_8 = -3062715379572166056LL;
short var_9 = (short)-21864;
signed char var_10 = (signed char)87;
int zero = 0;
signed char var_13 = (signed char)-88;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5182034212273190490LL;
int var_16 = -1006703119;
long long int var_17 = 6456087833220842010LL;
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
