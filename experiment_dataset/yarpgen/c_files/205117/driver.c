#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7794;
short var_2 = (short)-29133;
short var_4 = (short)-17475;
int var_6 = -581052512;
unsigned long long int var_7 = 13978507463206426338ULL;
unsigned short var_11 = (unsigned short)28522;
unsigned char var_13 = (unsigned char)219;
int zero = 0;
long long int var_14 = 3097696972043266751LL;
unsigned int var_15 = 3329128943U;
int var_16 = 1325900706;
int var_17 = -1639612055;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
