#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)192;
unsigned short var_5 = (unsigned short)239;
unsigned int var_7 = 2292614360U;
unsigned short var_8 = (unsigned short)53955;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)174;
int zero = 0;
unsigned short var_16 = (unsigned short)11586;
unsigned int var_17 = 1237864916U;
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
