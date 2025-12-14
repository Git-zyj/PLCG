#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 43089546;
short var_7 = (short)13959;
_Bool var_8 = (_Bool)1;
short var_13 = (short)638;
int zero = 0;
signed char var_14 = (signed char)113;
unsigned char var_15 = (unsigned char)142;
unsigned int var_16 = 3569233369U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
