#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 36689211U;
short var_4 = (short)19949;
int var_6 = 1866476124;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 6544356149090314738ULL;
long long int var_9 = 1200167450562934579LL;
int zero = 0;
short var_12 = (short)-27667;
unsigned short var_13 = (unsigned short)60594;
unsigned short var_14 = (unsigned short)1172;
long long int var_15 = -5056277307450178936LL;
unsigned short var_16 = (unsigned short)37001;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
