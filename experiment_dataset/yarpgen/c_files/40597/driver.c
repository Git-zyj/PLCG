#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2240015076U;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)5057;
int zero = 0;
unsigned long long int var_15 = 398223159001013229ULL;
signed char var_16 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
