#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-2903;
unsigned short var_8 = (unsigned short)55836;
unsigned long long int var_9 = 5083080096909418559ULL;
int var_10 = -399499526;
int zero = 0;
short var_13 = (short)-1100;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)12030;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
