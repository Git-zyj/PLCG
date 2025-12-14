#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)59507;
unsigned short var_8 = (unsigned short)14511;
int zero = 0;
unsigned int var_10 = 2744007521U;
unsigned short var_11 = (unsigned short)4355;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 213034003467089771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
