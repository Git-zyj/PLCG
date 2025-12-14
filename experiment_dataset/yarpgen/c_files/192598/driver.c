#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12318761951625195732ULL;
unsigned char var_9 = (unsigned char)18;
unsigned int var_10 = 1558357961U;
int zero = 0;
unsigned char var_11 = (unsigned char)187;
unsigned int var_12 = 2569805467U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
