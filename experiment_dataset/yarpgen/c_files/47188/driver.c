#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51204;
unsigned short var_1 = (unsigned short)29886;
unsigned char var_4 = (unsigned char)249;
short var_7 = (short)-21246;
unsigned int var_9 = 1576087145U;
signed char var_10 = (signed char)-101;
unsigned char var_11 = (unsigned char)17;
int var_12 = 1537247958;
int var_14 = 1415610840;
int var_17 = 1966661962;
int zero = 0;
short var_18 = (short)-17890;
unsigned long long int var_19 = 354980065895605434ULL;
unsigned short var_20 = (unsigned short)19798;
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
