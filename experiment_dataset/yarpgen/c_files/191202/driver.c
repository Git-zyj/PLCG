#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11945058837993472601ULL;
short var_1 = (short)-20249;
long long int var_5 = -8250871936842227385LL;
short var_6 = (short)-22517;
unsigned long long int var_7 = 13365750015356028129ULL;
short var_8 = (short)29485;
short var_11 = (short)12275;
int zero = 0;
long long int var_12 = -8340569080435627978LL;
unsigned char var_13 = (unsigned char)125;
int var_14 = -433844721;
int var_15 = 65053004;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
