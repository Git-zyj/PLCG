#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_9 = (unsigned char)170;
int var_10 = 1175101902;
short var_11 = (short)7092;
int zero = 0;
short var_14 = (short)15328;
unsigned long long int var_15 = 4506692159071705767ULL;
long long int var_16 = -8690491224550296830LL;
unsigned long long int var_17 = 6731657213959159125ULL;
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
