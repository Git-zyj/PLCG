#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21177;
unsigned int var_12 = 3814915136U;
int zero = 0;
long long int var_13 = 3206075050425384791LL;
unsigned long long int var_14 = 17208781823206074495ULL;
unsigned long long int var_15 = 12309879643130017728ULL;
void init() {
}

void checksum() {
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
