#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)168;
signed char var_5 = (signed char)-112;
unsigned long long int var_6 = 15344561629566073298ULL;
long long int var_7 = 3820234087178033112LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 8968557468090261941ULL;
short var_11 = (short)9644;
int var_12 = -941111008;
int zero = 0;
short var_16 = (short)18275;
signed char var_17 = (signed char)125;
short var_18 = (short)-16808;
short var_19 = (short)17786;
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
