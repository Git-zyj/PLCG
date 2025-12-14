#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6859781697932032422LL;
short var_3 = (short)14522;
int var_6 = 40431918;
int var_7 = -1800454784;
int zero = 0;
unsigned short var_15 = (unsigned short)42001;
short var_16 = (short)-141;
short var_17 = (short)-27688;
unsigned char var_18 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
