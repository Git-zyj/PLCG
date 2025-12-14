#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1415680864;
unsigned long long int var_8 = 14438777185839542731ULL;
signed char var_9 = (signed char)-88;
int var_11 = -1363822675;
unsigned long long int var_13 = 8245412853059284973ULL;
unsigned char var_14 = (unsigned char)58;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)119;
int var_17 = 1750371590;
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
