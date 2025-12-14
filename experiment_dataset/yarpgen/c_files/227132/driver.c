#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1035424836;
unsigned char var_6 = (unsigned char)53;
int var_10 = 1900426104;
short var_13 = (short)-5595;
int zero = 0;
unsigned int var_15 = 1802877187U;
int var_16 = -1635588525;
unsigned short var_17 = (unsigned short)25111;
int var_18 = -1203091966;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
