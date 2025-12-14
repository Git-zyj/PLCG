#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned long long int var_2 = 12327722287580174342ULL;
unsigned short var_4 = (unsigned short)29101;
signed char var_5 = (signed char)125;
int var_6 = -1726201170;
long long int var_7 = 5880828270239847096LL;
unsigned short var_10 = (unsigned short)64497;
unsigned char var_14 = (unsigned char)111;
int zero = 0;
short var_15 = (short)-8809;
unsigned long long int var_16 = 15014933700660393162ULL;
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
