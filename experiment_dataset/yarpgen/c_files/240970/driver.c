#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2044;
unsigned int var_1 = 1406714826U;
unsigned long long int var_5 = 5335935458067568091ULL;
unsigned char var_9 = (unsigned char)65;
unsigned char var_10 = (unsigned char)244;
unsigned int var_11 = 2314385414U;
int zero = 0;
long long int var_12 = -1197824399308698524LL;
int var_13 = -1028708575;
unsigned char var_14 = (unsigned char)186;
unsigned short var_15 = (unsigned short)6089;
unsigned int var_16 = 2504720039U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
