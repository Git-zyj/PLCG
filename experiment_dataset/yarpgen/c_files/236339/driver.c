#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 373171376169158376ULL;
unsigned short var_6 = (unsigned short)2368;
short var_8 = (short)3361;
signed char var_9 = (signed char)-30;
unsigned char var_10 = (unsigned char)211;
int zero = 0;
unsigned char var_11 = (unsigned char)31;
unsigned short var_12 = (unsigned short)47534;
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
