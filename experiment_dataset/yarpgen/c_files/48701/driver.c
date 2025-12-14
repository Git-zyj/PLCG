#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40405;
unsigned short var_7 = (unsigned short)13811;
unsigned char var_9 = (unsigned char)189;
unsigned char var_12 = (unsigned char)139;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)13869;
_Bool var_17 = (_Bool)0;
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
