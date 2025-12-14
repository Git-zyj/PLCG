#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14679;
unsigned short var_3 = (unsigned short)5882;
unsigned int var_7 = 2560907875U;
unsigned long long int var_9 = 2822591243235571831ULL;
unsigned long long int var_10 = 10880171654209632133ULL;
unsigned long long int var_12 = 7751345478491225471ULL;
signed char var_13 = (signed char)-80;
unsigned long long int var_18 = 11465547827280813965ULL;
int zero = 0;
short var_20 = (short)-2258;
long long int var_21 = 7693738595957881657LL;
void init() {
}

void checksum() {
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
