#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9565466440838633296ULL;
long long int var_8 = -8636580193717923927LL;
unsigned char var_11 = (unsigned char)161;
long long int var_16 = 4711683599374103156LL;
unsigned short var_17 = (unsigned short)63598;
long long int var_18 = -4335594060540139742LL;
int zero = 0;
unsigned long long int var_20 = 17340415632025789237ULL;
unsigned char var_21 = (unsigned char)161;
unsigned char var_22 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
