#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)99;
unsigned long long int var_3 = 16806474135570763344ULL;
unsigned int var_4 = 756618433U;
unsigned char var_9 = (unsigned char)198;
int zero = 0;
unsigned short var_11 = (unsigned short)45930;
short var_12 = (short)-8024;
int var_13 = -1181445138;
unsigned short var_14 = (unsigned short)27007;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
