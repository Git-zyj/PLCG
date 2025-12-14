#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23679;
long long int var_2 = 580538885183281905LL;
unsigned short var_5 = (unsigned short)52812;
unsigned short var_8 = (unsigned short)20070;
unsigned int var_12 = 1494214971U;
unsigned char var_13 = (unsigned char)243;
unsigned short var_14 = (unsigned short)7432;
int zero = 0;
short var_16 = (short)32225;
long long int var_17 = -6825838760995094727LL;
unsigned short var_18 = (unsigned short)63813;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
