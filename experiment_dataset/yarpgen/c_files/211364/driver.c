#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20857;
short var_4 = (short)3817;
signed char var_6 = (signed char)76;
short var_7 = (short)7710;
unsigned long long int var_8 = 685010460514423804ULL;
unsigned short var_9 = (unsigned short)18263;
unsigned long long int var_10 = 1285916005993113843ULL;
signed char var_11 = (signed char)90;
unsigned long long int var_13 = 9536159344387059553ULL;
unsigned long long int var_16 = 17285789143818782994ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)2298;
unsigned long long int var_18 = 16520213472992050066ULL;
unsigned int var_19 = 4127368719U;
int var_20 = 1607382239;
void init() {
}

void checksum() {
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
