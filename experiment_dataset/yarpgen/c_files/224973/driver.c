#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1212740106;
int var_3 = 598459040;
unsigned short var_16 = (unsigned short)43175;
int zero = 0;
unsigned short var_19 = (unsigned short)53475;
unsigned char var_20 = (unsigned char)205;
void init() {
}

void checksum() {
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
