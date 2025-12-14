#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -2949796636166156132LL;
unsigned short var_12 = (unsigned short)19117;
long long int var_15 = 3298533599990510139LL;
int zero = 0;
unsigned char var_17 = (unsigned char)106;
short var_18 = (short)-30037;
unsigned short var_19 = (unsigned short)29258;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
