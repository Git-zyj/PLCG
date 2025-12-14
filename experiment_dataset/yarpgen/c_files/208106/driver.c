#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55409;
signed char var_2 = (signed char)81;
int var_11 = -961233457;
long long int var_14 = 3373444969617657309LL;
int zero = 0;
short var_15 = (short)-2701;
unsigned short var_16 = (unsigned short)42728;
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
