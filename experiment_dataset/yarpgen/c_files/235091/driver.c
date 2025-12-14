#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4418814165134592380LL;
unsigned int var_2 = 2841933841U;
long long int var_3 = 6014589624822567316LL;
unsigned char var_7 = (unsigned char)65;
int var_9 = -399228123;
int zero = 0;
unsigned char var_10 = (unsigned char)152;
int var_11 = -282830124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
