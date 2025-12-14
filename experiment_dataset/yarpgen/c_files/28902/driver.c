#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
unsigned char var_4 = (unsigned char)240;
unsigned char var_5 = (unsigned char)228;
long long int var_6 = -6717031626871635451LL;
unsigned char var_7 = (unsigned char)97;
unsigned int var_8 = 2848553615U;
int var_9 = -113986030;
int zero = 0;
unsigned char var_13 = (unsigned char)69;
unsigned char var_14 = (unsigned char)57;
unsigned char var_15 = (unsigned char)39;
unsigned long long int var_16 = 14909194097446165272ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
