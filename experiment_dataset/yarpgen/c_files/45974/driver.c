#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
signed char var_6 = (signed char)107;
unsigned short var_7 = (unsigned short)10552;
unsigned char var_11 = (unsigned char)120;
int zero = 0;
unsigned int var_17 = 2178402591U;
long long int var_18 = -3979428346129150503LL;
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
