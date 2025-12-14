#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6544774136719056952LL;
unsigned char var_6 = (unsigned char)8;
unsigned long long int var_7 = 18232796755757809236ULL;
short var_10 = (short)11326;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 689473518089778043LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
