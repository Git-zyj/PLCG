#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11356501310865961556ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)21890;
int zero = 0;
int var_12 = -1714755005;
unsigned long long int var_13 = 7710859592152151103ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
