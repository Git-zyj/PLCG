#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13269366768408379773ULL;
unsigned short var_1 = (unsigned short)9298;
short var_3 = (short)21116;
signed char var_6 = (signed char)-5;
signed char var_7 = (signed char)-44;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
short var_11 = (short)30008;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
