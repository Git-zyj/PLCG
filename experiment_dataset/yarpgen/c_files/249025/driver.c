#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1176345296U;
_Bool var_6 = (_Bool)0;
long long int var_10 = -5090447695039660867LL;
signed char var_14 = (signed char)25;
int zero = 0;
int var_17 = -701380830;
unsigned int var_18 = 571664777U;
unsigned char var_19 = (unsigned char)184;
unsigned short var_20 = (unsigned short)30540;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
