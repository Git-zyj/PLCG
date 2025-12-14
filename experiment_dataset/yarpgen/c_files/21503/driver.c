#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3669071515241928974ULL;
unsigned short var_4 = (unsigned short)64436;
unsigned long long int var_5 = 7807086507201964046ULL;
unsigned long long int var_9 = 2355841592886025663ULL;
int zero = 0;
short var_15 = (short)-4765;
unsigned short var_16 = (unsigned short)51480;
void init() {
}

void checksum() {
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
