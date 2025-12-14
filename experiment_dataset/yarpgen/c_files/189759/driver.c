#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13186844277894571541ULL;
unsigned int var_1 = 1022394129U;
signed char var_2 = (signed char)26;
int var_3 = 1247154366;
unsigned short var_4 = (unsigned short)48204;
unsigned int var_8 = 86699357U;
_Bool var_10 = (_Bool)0;
unsigned char var_17 = (unsigned char)245;
unsigned short var_19 = (unsigned short)55570;
int zero = 0;
int var_20 = -1081224177;
short var_21 = (short)-7382;
short var_22 = (short)21562;
int var_23 = -1901488231;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
