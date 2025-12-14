#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1719156492;
unsigned int var_7 = 4089027803U;
unsigned char var_8 = (unsigned char)5;
unsigned long long int var_9 = 14029304161892697593ULL;
unsigned char var_15 = (unsigned char)1;
int zero = 0;
unsigned long long int var_16 = 11300069754067232543ULL;
long long int var_17 = 8200854233725234448LL;
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
