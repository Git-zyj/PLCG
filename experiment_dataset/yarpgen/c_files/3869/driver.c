#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16476664764733726596ULL;
short var_4 = (short)-21482;
long long int var_5 = 184245624683958369LL;
signed char var_6 = (signed char)90;
short var_11 = (short)-3081;
unsigned short var_14 = (unsigned short)42053;
short var_15 = (short)-9709;
short var_16 = (short)22223;
int zero = 0;
short var_17 = (short)16369;
unsigned short var_18 = (unsigned short)15370;
void init() {
}

void checksum() {
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
