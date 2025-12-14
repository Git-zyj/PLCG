#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1697;
int var_4 = 622922823;
int var_6 = -483917199;
int var_7 = -2073858657;
long long int var_8 = -8089758814565532779LL;
short var_9 = (short)922;
_Bool var_11 = (_Bool)1;
int var_12 = -988625800;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)3;
int zero = 0;
unsigned int var_15 = 2610379426U;
long long int var_16 = 6267070389784925454LL;
int var_17 = 1235304432;
void init() {
}

void checksum() {
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
