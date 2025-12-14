#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9033749313145276543ULL;
unsigned short var_2 = (unsigned short)23023;
short var_5 = (short)28229;
int zero = 0;
long long int var_18 = 2088751079568616169LL;
unsigned short var_19 = (unsigned short)53566;
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
