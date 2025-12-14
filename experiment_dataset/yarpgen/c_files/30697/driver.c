#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)39619;
unsigned char var_13 = (unsigned char)2;
unsigned long long int var_14 = 2658060839204839549ULL;
short var_15 = (short)17443;
int zero = 0;
unsigned short var_17 = (unsigned short)10681;
unsigned short var_18 = (unsigned short)6997;
unsigned short var_19 = (unsigned short)32059;
unsigned short var_20 = (unsigned short)58025;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
