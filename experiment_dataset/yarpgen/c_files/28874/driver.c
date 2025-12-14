#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44133;
short var_1 = (short)23031;
long long int var_3 = 6903988584367257458LL;
unsigned short var_5 = (unsigned short)62576;
unsigned char var_6 = (unsigned char)64;
unsigned char var_11 = (unsigned char)16;
int var_13 = -493510609;
unsigned short var_14 = (unsigned short)53798;
int zero = 0;
unsigned char var_16 = (unsigned char)235;
long long int var_17 = 5994011867321385275LL;
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
