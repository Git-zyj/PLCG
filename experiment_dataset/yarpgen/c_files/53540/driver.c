#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1480090286U;
unsigned char var_5 = (unsigned char)16;
int var_8 = 1256640093;
unsigned char var_9 = (unsigned char)252;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1524789845;
unsigned char var_13 = (unsigned char)8;
unsigned int var_14 = 453189120U;
long long int var_15 = -2624181418998126776LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
