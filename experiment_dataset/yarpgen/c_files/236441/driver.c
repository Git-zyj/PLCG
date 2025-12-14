#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1399543254121572465LL;
int var_1 = -37122277;
int var_5 = 788940871;
unsigned short var_7 = (unsigned short)65535;
int var_9 = 2141884522;
unsigned short var_11 = (unsigned short)65448;
int var_13 = 562668793;
unsigned short var_14 = (unsigned short)43676;
int var_15 = 2147462856;
int zero = 0;
unsigned short var_16 = (unsigned short)62332;
unsigned short var_17 = (unsigned short)61514;
int var_18 = 968406007;
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
