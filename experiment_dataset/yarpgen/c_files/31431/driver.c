#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2060507373U;
signed char var_10 = (signed char)94;
unsigned char var_13 = (unsigned char)158;
unsigned long long int var_14 = 6689991228270720206ULL;
unsigned short var_18 = (unsigned short)2573;
int zero = 0;
unsigned char var_19 = (unsigned char)162;
signed char var_20 = (signed char)-120;
short var_21 = (short)3185;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
