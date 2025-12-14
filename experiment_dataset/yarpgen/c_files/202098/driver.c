#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7312650475923874667ULL;
unsigned long long int var_2 = 8976605284453187916ULL;
signed char var_8 = (signed char)-101;
unsigned long long int var_10 = 5778255097983372400ULL;
unsigned char var_11 = (unsigned char)218;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)34;
unsigned char var_14 = (unsigned char)32;
unsigned char var_15 = (unsigned char)48;
unsigned char var_16 = (unsigned char)138;
int zero = 0;
int var_17 = -1565241642;
int var_18 = 143196303;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
