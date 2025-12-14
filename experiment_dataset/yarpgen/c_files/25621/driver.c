#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -619663881;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 2338745575467063284ULL;
short var_14 = (short)8420;
int zero = 0;
long long int var_17 = 5481729223491726612LL;
unsigned long long int var_18 = 8073635529531537645ULL;
void init() {
}

void checksum() {
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
