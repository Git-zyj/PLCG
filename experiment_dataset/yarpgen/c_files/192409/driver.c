#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1638614008;
short var_7 = (short)-13088;
unsigned long long int var_8 = 12355289048681275422ULL;
signed char var_9 = (signed char)122;
unsigned char var_11 = (unsigned char)174;
unsigned int var_14 = 2069920684U;
unsigned short var_15 = (unsigned short)51831;
unsigned char var_16 = (unsigned char)166;
int zero = 0;
unsigned long long int var_17 = 16945585856038453900ULL;
unsigned short var_18 = (unsigned short)22360;
unsigned int var_19 = 266054296U;
long long int var_20 = -95577441757319743LL;
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
