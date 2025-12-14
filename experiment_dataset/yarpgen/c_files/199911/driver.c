#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3078517908393228034ULL;
unsigned long long int var_2 = 11493503457887109017ULL;
unsigned int var_4 = 780294280U;
short var_6 = (short)1644;
short var_7 = (short)-20310;
unsigned short var_8 = (unsigned short)9252;
unsigned char var_9 = (unsigned char)203;
int zero = 0;
unsigned int var_14 = 898754584U;
unsigned char var_15 = (unsigned char)235;
unsigned long long int var_16 = 15520140191779468439ULL;
unsigned long long int var_17 = 10198340125633691965ULL;
int var_18 = 1129233794;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
