#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)9376;
unsigned short var_10 = (unsigned short)54082;
unsigned short var_13 = (unsigned short)37668;
unsigned char var_16 = (unsigned char)165;
int zero = 0;
signed char var_18 = (signed char)50;
unsigned char var_19 = (unsigned char)213;
unsigned char var_20 = (unsigned char)34;
unsigned char var_21 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
