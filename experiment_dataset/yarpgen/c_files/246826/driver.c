#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
unsigned char var_3 = (unsigned char)177;
signed char var_4 = (signed char)75;
unsigned char var_6 = (unsigned char)163;
short var_7 = (short)-30503;
_Bool var_10 = (_Bool)1;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
unsigned char var_17 = (unsigned char)130;
unsigned int var_18 = 2112382544U;
short var_19 = (short)-22128;
void init() {
}

void checksum() {
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
