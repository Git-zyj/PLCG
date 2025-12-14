#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1526189948;
long long int var_1 = 960082747433873803LL;
int var_3 = 645939252;
short var_4 = (short)12058;
unsigned char var_5 = (unsigned char)253;
unsigned long long int var_6 = 15748553741694387386ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 12301228329157945113ULL;
int zero = 0;
unsigned long long int var_11 = 7497113726423457ULL;
unsigned int var_12 = 376616232U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
