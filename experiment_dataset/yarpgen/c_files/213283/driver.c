#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)244;
unsigned short var_7 = (unsigned short)2876;
unsigned char var_9 = (unsigned char)138;
unsigned char var_14 = (unsigned char)92;
unsigned short var_15 = (unsigned short)18204;
int zero = 0;
unsigned char var_17 = (unsigned char)82;
unsigned int var_18 = 2612791238U;
void init() {
}

void checksum() {
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
