#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)208;
unsigned int var_6 = 559550540U;
int var_7 = -1323732565;
unsigned long long int var_10 = 31895935998066958ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
int var_17 = -115016162;
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
