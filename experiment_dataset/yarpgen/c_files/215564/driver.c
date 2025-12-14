#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6279491079194689755ULL;
unsigned int var_2 = 3100035183U;
unsigned long long int var_5 = 14809205515365742402ULL;
unsigned char var_7 = (unsigned char)12;
unsigned long long int var_8 = 8014599538559221908ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)250;
long long int var_12 = -3277260606921658242LL;
int zero = 0;
unsigned int var_14 = 4252041959U;
unsigned char var_15 = (unsigned char)69;
short var_16 = (short)-26898;
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
