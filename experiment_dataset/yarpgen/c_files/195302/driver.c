#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2019752771U;
unsigned short var_10 = (unsigned short)19242;
unsigned long long int var_13 = 11336118503160914004ULL;
unsigned long long int var_16 = 10044089157277932520ULL;
unsigned long long int var_17 = 12642416916524554124ULL;
int zero = 0;
long long int var_18 = 8839838132317593630LL;
unsigned long long int var_19 = 17579612516860032659ULL;
unsigned short var_20 = (unsigned short)44640;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
