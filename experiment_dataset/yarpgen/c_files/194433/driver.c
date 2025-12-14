#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned char var_2 = (unsigned char)113;
unsigned char var_3 = (unsigned char)189;
unsigned long long int var_4 = 15033697689605773956ULL;
unsigned long long int var_6 = 950887860459293709ULL;
int var_11 = -1008052208;
_Bool var_12 = (_Bool)0;
long long int var_15 = -451419783806171601LL;
int zero = 0;
unsigned int var_18 = 1551488255U;
int var_19 = 1881240227;
void init() {
}

void checksum() {
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
