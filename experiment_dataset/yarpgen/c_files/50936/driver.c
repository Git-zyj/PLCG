#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)121;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)48;
signed char var_8 = (signed char)59;
short var_9 = (short)-22139;
short var_15 = (short)-3930;
int zero = 0;
unsigned long long int var_17 = 1203410247770667553ULL;
unsigned int var_18 = 3253482769U;
short var_19 = (short)-3730;
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
