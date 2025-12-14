#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 555703119262222417LL;
long long int var_14 = -1000767951969305332LL;
int zero = 0;
unsigned short var_15 = (unsigned short)35971;
unsigned short var_16 = (unsigned short)33662;
unsigned short var_17 = (unsigned short)44685;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
