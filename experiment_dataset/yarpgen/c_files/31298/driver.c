#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6344;
_Bool var_11 = (_Bool)1;
long long int var_18 = 7729068665355856013LL;
int zero = 0;
unsigned int var_19 = 903827632U;
long long int var_20 = -2024012473130623267LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
