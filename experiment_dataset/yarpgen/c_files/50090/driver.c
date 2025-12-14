#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1056670871225685309LL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1977614504U;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)979;
unsigned short var_11 = (unsigned short)53946;
int zero = 0;
short var_17 = (short)29518;
short var_18 = (short)-15869;
unsigned long long int var_19 = 13056878658822781743ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
