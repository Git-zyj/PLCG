#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)57;
signed char var_9 = (signed char)40;
unsigned int var_11 = 1764710517U;
unsigned char var_13 = (unsigned char)244;
int zero = 0;
unsigned char var_16 = (unsigned char)189;
unsigned char var_17 = (unsigned char)96;
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
