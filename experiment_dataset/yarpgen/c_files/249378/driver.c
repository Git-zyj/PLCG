#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2397919383619429253ULL;
unsigned short var_2 = (unsigned short)46041;
short var_4 = (short)-15679;
unsigned char var_5 = (unsigned char)128;
int zero = 0;
signed char var_10 = (signed char)-30;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)104;
signed char var_13 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
