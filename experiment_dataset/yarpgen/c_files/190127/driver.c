#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2416;
unsigned short var_2 = (unsigned short)57472;
unsigned int var_4 = 1872370076U;
unsigned int var_9 = 801501387U;
unsigned int var_10 = 194998021U;
int zero = 0;
unsigned char var_15 = (unsigned char)35;
unsigned short var_16 = (unsigned short)57563;
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
