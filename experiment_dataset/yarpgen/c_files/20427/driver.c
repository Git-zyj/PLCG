#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1639275151;
int var_6 = -1280224640;
long long int var_9 = 7765104211670565031LL;
long long int var_10 = 2726725390502770849LL;
int zero = 0;
unsigned short var_15 = (unsigned short)65004;
unsigned char var_16 = (unsigned char)72;
unsigned long long int var_17 = 11631149882601047749ULL;
void init() {
}

void checksum() {
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
