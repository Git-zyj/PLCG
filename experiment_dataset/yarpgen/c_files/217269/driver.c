#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1892;
unsigned int var_8 = 2168771118U;
unsigned short var_16 = (unsigned short)4600;
long long int var_17 = -3475210179013269778LL;
int zero = 0;
signed char var_19 = (signed char)14;
int var_20 = 779868875;
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
