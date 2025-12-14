#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53576;
short var_5 = (short)-27912;
signed char var_12 = (signed char)-30;
_Bool var_14 = (_Bool)0;
unsigned short var_19 = (unsigned short)60306;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-18745;
short var_22 = (short)3827;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
