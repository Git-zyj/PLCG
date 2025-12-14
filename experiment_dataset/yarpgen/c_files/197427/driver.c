#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2712279061U;
unsigned long long int var_7 = 5287233908024532937ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = -416933421;
unsigned int var_11 = 1066221607U;
short var_12 = (short)3188;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
