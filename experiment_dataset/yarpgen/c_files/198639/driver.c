#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13212;
signed char var_2 = (signed char)33;
short var_6 = (short)19128;
int var_9 = 724213419;
short var_11 = (short)-4724;
unsigned int var_13 = 560006173U;
int zero = 0;
unsigned long long int var_16 = 8561219333214394270ULL;
long long int var_17 = -4524826076347522784LL;
void init() {
}

void checksum() {
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
