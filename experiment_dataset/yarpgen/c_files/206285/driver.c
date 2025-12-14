#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1307;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4979540667886278265LL;
int zero = 0;
short var_15 = (short)-149;
unsigned int var_16 = 2277274468U;
unsigned char var_17 = (unsigned char)156;
void init() {
}

void checksum() {
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
