#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
long long int var_1 = 619389068203303442LL;
short var_3 = (short)25117;
unsigned char var_4 = (unsigned char)188;
int var_5 = -728375326;
short var_7 = (short)-7128;
short var_8 = (short)-7685;
int zero = 0;
short var_10 = (short)-28475;
short var_11 = (short)-7311;
int var_12 = 645019017;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
