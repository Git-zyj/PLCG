#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
signed char var_3 = (signed char)79;
unsigned long long int var_4 = 11230397295048540830ULL;
unsigned char var_5 = (unsigned char)81;
unsigned long long int var_6 = 7734066636337927230ULL;
unsigned char var_9 = (unsigned char)249;
unsigned short var_11 = (unsigned short)61921;
int zero = 0;
short var_12 = (short)-2084;
int var_13 = 1984215394;
unsigned short var_14 = (unsigned short)3035;
unsigned short var_15 = (unsigned short)10245;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
