#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1031443419U;
unsigned char var_11 = (unsigned char)49;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)182;
int zero = 0;
int var_19 = -1116919805;
unsigned char var_20 = (unsigned char)231;
long long int var_21 = 1837574614156401555LL;
void init() {
}

void checksum() {
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
