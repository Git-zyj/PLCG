#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9826799387656321864ULL;
unsigned int var_4 = 1642835503U;
long long int var_8 = 3046079799138550312LL;
unsigned long long int var_10 = 10210336567885022561ULL;
unsigned int var_12 = 2363610949U;
unsigned long long int var_14 = 4065058785571091862ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)237;
short var_17 = (short)7644;
unsigned char var_18 = (unsigned char)210;
unsigned int var_19 = 1572055382U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
