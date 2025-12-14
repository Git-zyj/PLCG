#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2491;
unsigned short var_5 = (unsigned short)17569;
long long int var_7 = 953621631326168860LL;
short var_9 = (short)25240;
int var_14 = 1868868522;
unsigned char var_15 = (unsigned char)12;
int zero = 0;
short var_18 = (short)-24286;
long long int var_19 = -5727368724333618721LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
