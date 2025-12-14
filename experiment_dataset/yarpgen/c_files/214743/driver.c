#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_8 = (unsigned char)221;
unsigned int var_9 = 1595273878U;
int zero = 0;
signed char var_15 = (signed char)-40;
unsigned long long int var_16 = 5558111844536678185ULL;
unsigned int var_17 = 230733104U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
