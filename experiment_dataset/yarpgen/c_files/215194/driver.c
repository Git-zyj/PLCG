#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5930218242297164200LL;
unsigned char var_6 = (unsigned char)229;
short var_16 = (short)-1989;
short var_19 = (short)-16226;
int zero = 0;
int var_20 = -830871597;
int var_21 = -1274618859;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
