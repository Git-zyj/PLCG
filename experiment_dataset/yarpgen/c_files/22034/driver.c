#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1251020094;
int var_2 = -717063228;
unsigned long long int var_3 = 13443540646725886520ULL;
long long int var_10 = 763657340577445318LL;
int zero = 0;
unsigned long long int var_11 = 3021771215066285968ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
