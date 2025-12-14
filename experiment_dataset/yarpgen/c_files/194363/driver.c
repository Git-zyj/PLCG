#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63070;
unsigned char var_3 = (unsigned char)161;
unsigned short var_4 = (unsigned short)25242;
short var_5 = (short)-20115;
long long int var_8 = 7673858156005311050LL;
unsigned char var_10 = (unsigned char)7;
short var_11 = (short)-21663;
long long int var_13 = 4564315051094359786LL;
int var_15 = 637743336;
short var_17 = (short)23114;
int zero = 0;
unsigned int var_20 = 4083860982U;
unsigned char var_21 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
