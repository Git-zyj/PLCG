#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)48490;
long long int var_11 = 8255096620960571337LL;
unsigned int var_15 = 361403152U;
unsigned short var_16 = (unsigned short)59999;
unsigned int var_18 = 2249478830U;
int zero = 0;
unsigned short var_19 = (unsigned short)63529;
unsigned char var_20 = (unsigned char)165;
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
