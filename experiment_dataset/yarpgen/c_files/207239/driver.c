#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)27;
unsigned long long int var_4 = 5302653054219569476ULL;
unsigned char var_12 = (unsigned char)80;
_Bool var_13 = (_Bool)1;
unsigned long long int var_17 = 9975622368225878952ULL;
int zero = 0;
long long int var_20 = 584050401276099037LL;
unsigned int var_21 = 2774222351U;
unsigned int var_22 = 1993154424U;
unsigned long long int var_23 = 13119257413331848022ULL;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
