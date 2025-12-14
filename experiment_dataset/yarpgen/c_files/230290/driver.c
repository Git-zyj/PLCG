#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1756283707U;
unsigned char var_1 = (unsigned char)192;
unsigned short var_3 = (unsigned short)3788;
unsigned char var_7 = (unsigned char)183;
signed char var_8 = (signed char)-24;
int zero = 0;
unsigned long long int var_12 = 17304493773657432104ULL;
unsigned char var_13 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
