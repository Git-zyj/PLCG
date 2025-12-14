#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26806;
unsigned short var_2 = (unsigned short)51517;
unsigned short var_7 = (unsigned short)3288;
unsigned short var_9 = (unsigned short)65221;
int zero = 0;
long long int var_15 = -2269992560249762231LL;
unsigned char var_16 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
