#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 635845836;
unsigned int var_6 = 3597810804U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)90;
int var_10 = -1135685032;
long long int var_14 = -7679658269409352731LL;
unsigned int var_15 = 3524743216U;
int zero = 0;
unsigned int var_16 = 3297124525U;
int var_17 = 1785136853;
void init() {
}

void checksum() {
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
