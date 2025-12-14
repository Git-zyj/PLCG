#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)67;
unsigned int var_5 = 2957761539U;
unsigned char var_8 = (unsigned char)24;
int var_13 = -2071532835;
long long int var_15 = 8651486196002248884LL;
int zero = 0;
unsigned char var_16 = (unsigned char)216;
unsigned short var_17 = (unsigned short)5791;
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
