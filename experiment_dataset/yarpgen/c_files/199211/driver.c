#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)203;
int var_8 = -1438811458;
unsigned short var_16 = (unsigned short)63668;
int zero = 0;
unsigned short var_17 = (unsigned short)51939;
unsigned long long int var_18 = 11246756291476392312ULL;
long long int var_19 = -5877493960827461367LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
