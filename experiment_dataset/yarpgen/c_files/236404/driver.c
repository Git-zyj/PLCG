#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned short var_8 = (unsigned short)32084;
int zero = 0;
long long int var_16 = -6558602205064154504LL;
unsigned long long int var_17 = 8250209743188813272ULL;
unsigned char var_18 = (unsigned char)32;
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
