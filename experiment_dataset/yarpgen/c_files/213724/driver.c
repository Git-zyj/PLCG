#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2330;
unsigned long long int var_4 = 12273060519906500547ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)44489;
unsigned long long int var_10 = 1983815216225803617ULL;
long long int var_12 = 3856288468154546827LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -229752705565495532LL;
unsigned short var_16 = (unsigned short)19577;
void init() {
}

void checksum() {
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
