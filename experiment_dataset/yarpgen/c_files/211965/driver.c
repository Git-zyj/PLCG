#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-111;
unsigned long long int var_6 = 17070012126675530998ULL;
unsigned long long int var_8 = 12379435950936950088ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 2601404905342163872LL;
long long int var_13 = 4291954549044202362LL;
signed char var_14 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
