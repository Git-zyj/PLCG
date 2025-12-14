#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44683;
unsigned char var_4 = (unsigned char)242;
unsigned long long int var_5 = 8276865773651185960ULL;
unsigned short var_6 = (unsigned short)28185;
short var_10 = (short)-21062;
int zero = 0;
int var_11 = 1812017199;
long long int var_12 = 6335141565959752151LL;
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
