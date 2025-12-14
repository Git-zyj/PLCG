#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3990047471U;
unsigned short var_2 = (unsigned short)44390;
unsigned short var_3 = (unsigned short)64423;
unsigned int var_7 = 4025708483U;
unsigned int var_8 = 1889241268U;
unsigned char var_13 = (unsigned char)50;
int zero = 0;
signed char var_14 = (signed char)81;
unsigned char var_15 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
