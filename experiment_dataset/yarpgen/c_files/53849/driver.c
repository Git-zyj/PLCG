#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2740803379673173207ULL;
unsigned char var_1 = (unsigned char)57;
short var_2 = (short)30099;
unsigned long long int var_3 = 10702360077781680879ULL;
unsigned long long int var_4 = 47297743894152822ULL;
short var_6 = (short)7754;
signed char var_7 = (signed char)17;
signed char var_9 = (signed char)120;
int zero = 0;
short var_10 = (short)12016;
short var_11 = (short)-16575;
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
