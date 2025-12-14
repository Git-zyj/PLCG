#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3277;
unsigned long long int var_3 = 18382267883285429770ULL;
int var_5 = -1662713474;
unsigned int var_6 = 260930338U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)14189;
int zero = 0;
unsigned long long int var_11 = 7142260019388005277ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
