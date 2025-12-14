#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2330548842251883758ULL;
unsigned short var_2 = (unsigned short)5448;
unsigned short var_3 = (unsigned short)33036;
unsigned char var_5 = (unsigned char)205;
unsigned short var_7 = (unsigned short)35246;
unsigned long long int var_8 = 15338505282022283009ULL;
unsigned long long int var_9 = 4332328072670361421ULL;
unsigned char var_10 = (unsigned char)53;
int zero = 0;
short var_13 = (short)-21922;
unsigned short var_14 = (unsigned short)62240;
unsigned int var_15 = 2617251758U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
