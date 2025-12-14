#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3002451154U;
unsigned char var_3 = (unsigned char)234;
unsigned short var_8 = (unsigned short)18011;
short var_9 = (short)19861;
short var_10 = (short)-19141;
int zero = 0;
unsigned short var_17 = (unsigned short)58662;
unsigned int var_18 = 207566108U;
unsigned int var_19 = 58210702U;
unsigned long long int var_20 = 4745909658446563183ULL;
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
