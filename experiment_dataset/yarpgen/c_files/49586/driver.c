#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13185;
unsigned int var_3 = 3944592269U;
unsigned long long int var_6 = 15777291002580355514ULL;
unsigned char var_9 = (unsigned char)198;
unsigned short var_11 = (unsigned short)47289;
unsigned int var_13 = 2900418736U;
long long int var_16 = 2804483380949182178LL;
unsigned char var_17 = (unsigned char)76;
int zero = 0;
unsigned long long int var_20 = 9304197450114227384ULL;
short var_21 = (short)-28411;
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
