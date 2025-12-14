#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned short var_3 = (unsigned short)2734;
unsigned short var_6 = (unsigned short)37931;
unsigned int var_17 = 3885927816U;
int zero = 0;
long long int var_20 = -6471884054450584545LL;
int var_21 = -2038008006;
int var_22 = 265819484;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
