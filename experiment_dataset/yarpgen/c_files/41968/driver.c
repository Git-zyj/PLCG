#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13095;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 1925035201741078326ULL;
unsigned long long int var_15 = 2173670112534191902ULL;
signed char var_16 = (signed char)-48;
unsigned short var_17 = (unsigned short)17836;
int zero = 0;
unsigned char var_20 = (unsigned char)94;
unsigned long long int var_21 = 2771190817067845023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
