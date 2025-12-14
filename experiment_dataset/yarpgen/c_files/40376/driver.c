#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 8431873215115660875LL;
unsigned char var_11 = (unsigned char)66;
short var_13 = (short)-16694;
unsigned long long int var_14 = 8309861308019632649ULL;
int zero = 0;
short var_15 = (short)-11328;
unsigned short var_16 = (unsigned short)46753;
unsigned char var_17 = (unsigned char)237;
unsigned int var_18 = 2550530121U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
