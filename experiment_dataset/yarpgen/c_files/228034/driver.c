#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30857;
unsigned long long int var_3 = 7575666473560577542ULL;
signed char var_4 = (signed char)-101;
signed char var_10 = (signed char)99;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)231;
unsigned long long int var_17 = 1561217400146820767ULL;
void init() {
}

void checksum() {
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
