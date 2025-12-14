#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3347113500U;
unsigned int var_11 = 257460765U;
unsigned short var_15 = (unsigned short)58547;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = 6695750974673775827LL;
unsigned short var_19 = (unsigned short)30202;
long long int var_20 = 1719407809255357694LL;
unsigned int var_21 = 2598581281U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
