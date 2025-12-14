#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)-10418;
unsigned int var_7 = 3780812568U;
short var_8 = (short)-6913;
long long int var_10 = -2260079105274051333LL;
int zero = 0;
unsigned char var_15 = (unsigned char)225;
long long int var_16 = 4731754497708977698LL;
signed char var_17 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
