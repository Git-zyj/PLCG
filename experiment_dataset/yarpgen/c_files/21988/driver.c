#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30489;
int var_1 = -1720298292;
long long int var_2 = 7874586411189478407LL;
unsigned char var_9 = (unsigned char)252;
unsigned short var_12 = (unsigned short)60411;
int var_13 = -2059293432;
int zero = 0;
int var_16 = 998904348;
signed char var_17 = (signed char)55;
signed char var_18 = (signed char)76;
void init() {
}

void checksum() {
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
