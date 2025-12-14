#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5827;
unsigned char var_3 = (unsigned char)93;
unsigned long long int var_4 = 17858178873445376727ULL;
signed char var_10 = (signed char)100;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 3209269199U;
int zero = 0;
signed char var_17 = (signed char)28;
unsigned char var_18 = (unsigned char)187;
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
