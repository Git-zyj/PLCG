#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned char var_8 = (unsigned char)98;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 6652784205776360210ULL;
long long int var_14 = 4652743574362893593LL;
unsigned int var_15 = 1088768586U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
