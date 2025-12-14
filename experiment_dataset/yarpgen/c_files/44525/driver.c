#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34187;
unsigned char var_6 = (unsigned char)143;
_Bool var_9 = (_Bool)1;
unsigned char var_14 = (unsigned char)172;
int zero = 0;
unsigned short var_18 = (unsigned short)9008;
unsigned long long int var_19 = 11178107652911893128ULL;
long long int var_20 = -6822340728849026840LL;
unsigned int var_21 = 2181717262U;
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
