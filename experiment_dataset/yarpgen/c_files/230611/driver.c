#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned short var_2 = (unsigned short)61175;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-27229;
long long int var_7 = 809569476840877004LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13384771567961950142ULL;
unsigned short var_12 = (unsigned short)20564;
short var_13 = (short)7184;
int var_14 = -627283223;
int zero = 0;
int var_15 = -1427598672;
unsigned short var_16 = (unsigned short)2321;
void init() {
}

void checksum() {
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
