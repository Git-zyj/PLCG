#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
int var_4 = -1144440897;
unsigned short var_7 = (unsigned short)14154;
unsigned long long int var_9 = 13307351432838198571ULL;
short var_10 = (short)-14103;
unsigned char var_13 = (unsigned char)236;
int zero = 0;
unsigned char var_16 = (unsigned char)71;
unsigned short var_17 = (unsigned short)37697;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
