#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21433;
unsigned long long int var_9 = 12892980475338182239ULL;
long long int var_15 = 2755750004927934909LL;
int zero = 0;
unsigned int var_18 = 448831493U;
long long int var_19 = 6875934094696592609LL;
void init() {
}

void checksum() {
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
