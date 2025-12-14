#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 501127398U;
unsigned int var_9 = 3674538126U;
int var_11 = -1064676911;
unsigned char var_12 = (unsigned char)47;
unsigned char var_14 = (unsigned char)165;
long long int var_16 = 1469613009370477995LL;
int zero = 0;
unsigned short var_18 = (unsigned short)35122;
unsigned char var_19 = (unsigned char)7;
void init() {
}

void checksum() {
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
