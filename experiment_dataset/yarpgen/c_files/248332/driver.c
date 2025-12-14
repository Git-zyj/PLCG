#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9588;
short var_4 = (short)-21763;
unsigned short var_7 = (unsigned short)5789;
int zero = 0;
unsigned short var_13 = (unsigned short)28420;
unsigned char var_14 = (unsigned char)214;
unsigned short var_15 = (unsigned short)42330;
unsigned short var_16 = (unsigned short)23684;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
