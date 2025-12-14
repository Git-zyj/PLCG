#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3757854181U;
unsigned char var_6 = (unsigned char)44;
short var_7 = (short)-22904;
int var_8 = 2031587563;
int var_9 = 1159690015;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)2897;
unsigned short var_12 = (unsigned short)55946;
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
