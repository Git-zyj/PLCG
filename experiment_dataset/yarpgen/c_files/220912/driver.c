#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
unsigned char var_5 = (unsigned char)165;
short var_6 = (short)19364;
int var_9 = 1030478654;
unsigned char var_11 = (unsigned char)51;
unsigned short var_13 = (unsigned short)61610;
short var_14 = (short)26042;
unsigned long long int var_17 = 16892364328339752494ULL;
int zero = 0;
int var_18 = -1805573187;
unsigned short var_19 = (unsigned short)6277;
signed char var_20 = (signed char)-65;
void init() {
}

void checksum() {
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
