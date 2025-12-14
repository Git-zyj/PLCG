#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
unsigned char var_2 = (unsigned char)197;
short var_3 = (short)16250;
unsigned short var_7 = (unsigned short)34984;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 3485356067U;
unsigned char var_17 = (unsigned char)55;
int zero = 0;
short var_19 = (short)-7167;
unsigned long long int var_20 = 10749579483748621204ULL;
short var_21 = (short)-18480;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
