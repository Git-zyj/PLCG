#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7488644724661265166LL;
signed char var_6 = (signed char)-86;
unsigned int var_8 = 2268112272U;
long long int var_11 = -752082148869567565LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)23;
unsigned int var_16 = 796566112U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
