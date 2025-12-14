#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50973;
signed char var_1 = (signed char)-49;
short var_2 = (short)-6488;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-10030;
unsigned char var_6 = (unsigned char)105;
_Bool var_8 = (_Bool)0;
long long int var_11 = 9149273062633136773LL;
unsigned long long int var_12 = 10631407630290398628ULL;
signed char var_13 = (signed char)87;
unsigned int var_15 = 2045719443U;
int zero = 0;
unsigned short var_16 = (unsigned short)17363;
short var_17 = (short)-8359;
long long int var_18 = 4640041630057520406LL;
unsigned char var_19 = (unsigned char)61;
void init() {
}

void checksum() {
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
