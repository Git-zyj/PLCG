#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3368238795U;
unsigned char var_5 = (unsigned char)98;
int var_6 = 500121897;
short var_14 = (short)18153;
short var_15 = (short)11036;
unsigned long long int var_16 = 4504508994710982549ULL;
int zero = 0;
long long int var_17 = -1738762120349774231LL;
signed char var_18 = (signed char)84;
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
