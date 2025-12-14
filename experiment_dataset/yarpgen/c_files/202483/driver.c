#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
int var_1 = 610795725;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int zero = 0;
long long int var_10 = 8698673149886920831LL;
long long int var_11 = 8790455445858779969LL;
unsigned long long int var_12 = 1415104428550948756ULL;
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
