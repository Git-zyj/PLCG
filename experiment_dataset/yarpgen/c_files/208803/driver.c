#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2803096249U;
unsigned char var_6 = (unsigned char)149;
long long int var_8 = -8895290670419847709LL;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -885391289;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 189290137U;
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
