#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)108;
long long int var_8 = 435783985513262400LL;
long long int var_12 = -7169509925676137075LL;
int zero = 0;
unsigned int var_16 = 1337341169U;
unsigned short var_17 = (unsigned short)8614;
short var_18 = (short)-26856;
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
