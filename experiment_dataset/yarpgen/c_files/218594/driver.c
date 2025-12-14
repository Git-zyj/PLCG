#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2344155385U;
short var_4 = (short)-16188;
signed char var_5 = (signed char)65;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 18379136674594602715ULL;
int zero = 0;
long long int var_15 = 8187188715021998619LL;
unsigned long long int var_16 = 1897704414286543647ULL;
int var_17 = -1794193852;
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
