#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)111;
long long int var_9 = -4599269228937667847LL;
unsigned char var_13 = (unsigned char)35;
unsigned char var_14 = (unsigned char)235;
int zero = 0;
signed char var_15 = (signed char)-78;
unsigned char var_16 = (unsigned char)38;
short var_17 = (short)3704;
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
