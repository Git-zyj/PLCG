#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)82;
int var_8 = 1354455888;
short var_10 = (short)-13961;
unsigned short var_13 = (unsigned short)53957;
int zero = 0;
int var_14 = -1836109015;
short var_15 = (short)19768;
unsigned short var_16 = (unsigned short)38359;
unsigned short var_17 = (unsigned short)63469;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
