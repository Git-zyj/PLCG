#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
unsigned int var_4 = 3675437760U;
unsigned long long int var_8 = 14617206127891480767ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)18329;
unsigned int var_17 = 2828224005U;
unsigned int var_18 = 4239210450U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
