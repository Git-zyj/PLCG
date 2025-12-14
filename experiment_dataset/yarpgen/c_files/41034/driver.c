#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -715029037;
_Bool var_4 = (_Bool)1;
long long int var_8 = 3157303099032259406LL;
int zero = 0;
signed char var_11 = (signed char)89;
unsigned long long int var_12 = 5036986147860928632ULL;
unsigned int var_13 = 2254889206U;
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
