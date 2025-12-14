#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-70;
unsigned int var_2 = 3394810173U;
unsigned long long int var_6 = 4136426072857894409ULL;
int zero = 0;
unsigned int var_14 = 2727312672U;
unsigned short var_15 = (unsigned short)53435;
signed char var_16 = (signed char)-79;
long long int var_17 = 4015599193533034441LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
