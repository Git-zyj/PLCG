#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)206;
unsigned char var_6 = (unsigned char)176;
unsigned short var_7 = (unsigned short)25814;
unsigned int var_8 = 1925765480U;
short var_9 = (short)-12971;
short var_10 = (short)-23311;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)6353;
unsigned long long int var_16 = 16466869001463849372ULL;
unsigned long long int var_17 = 1586346675444518176ULL;
unsigned int var_18 = 2366116387U;
long long int var_19 = -5833926565593899243LL;
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
