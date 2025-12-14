#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1026224610;
unsigned char var_3 = (unsigned char)246;
unsigned char var_5 = (unsigned char)197;
signed char var_7 = (signed char)26;
long long int var_8 = 9212322200459096348LL;
int zero = 0;
short var_10 = (short)-13802;
short var_11 = (short)-3114;
signed char var_12 = (signed char)-113;
unsigned int var_13 = 1457335694U;
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
