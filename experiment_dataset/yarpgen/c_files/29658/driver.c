#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11655;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)25713;
short var_3 = (short)-2880;
int var_4 = -1101202903;
unsigned long long int var_6 = 8220419081123543876ULL;
unsigned char var_8 = (unsigned char)185;
long long int var_9 = -7351120658293027099LL;
long long int var_10 = -1792389773496224310LL;
short var_11 = (short)-16658;
long long int var_12 = 5914543037993736739LL;
int zero = 0;
unsigned char var_14 = (unsigned char)154;
short var_15 = (short)17510;
unsigned char var_16 = (unsigned char)71;
void init() {
}

void checksum() {
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
