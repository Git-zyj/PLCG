#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
_Bool var_2 = (_Bool)0;
long long int var_3 = 1351280444571860144LL;
int var_4 = -327920236;
signed char var_5 = (signed char)69;
unsigned char var_9 = (unsigned char)178;
long long int var_10 = 4432296639317531310LL;
int zero = 0;
unsigned short var_11 = (unsigned short)1699;
unsigned char var_12 = (unsigned char)240;
unsigned short var_13 = (unsigned short)6805;
short var_14 = (short)14537;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
