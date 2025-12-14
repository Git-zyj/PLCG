#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3250615787756335988LL;
_Bool var_1 = (_Bool)1;
unsigned int var_7 = 2573978390U;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)41522;
int zero = 0;
unsigned char var_15 = (unsigned char)139;
long long int var_16 = -476776670313516783LL;
unsigned int var_17 = 3262841433U;
long long int var_18 = 8745454529347662789LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
