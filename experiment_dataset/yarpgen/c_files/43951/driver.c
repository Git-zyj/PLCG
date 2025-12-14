#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28022;
unsigned char var_2 = (unsigned char)27;
int var_3 = 1651073843;
unsigned char var_6 = (unsigned char)246;
unsigned char var_9 = (unsigned char)53;
unsigned int var_10 = 2164683152U;
int var_12 = -1925518353;
unsigned long long int var_13 = 3117521994320194820ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)63756;
long long int var_17 = -5670801928739492980LL;
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
