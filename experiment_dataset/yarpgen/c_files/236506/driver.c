#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65166;
short var_4 = (short)9402;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)45282;
short var_11 = (short)-27879;
short var_13 = (short)25403;
unsigned long long int var_16 = 5406676970013290767ULL;
int zero = 0;
unsigned int var_17 = 1484831007U;
signed char var_18 = (signed char)34;
unsigned int var_19 = 36823669U;
unsigned short var_20 = (unsigned short)34739;
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
