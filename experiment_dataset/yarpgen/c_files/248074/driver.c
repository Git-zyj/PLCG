#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)59;
int var_5 = 620746388;
unsigned int var_11 = 1026672193U;
unsigned int var_16 = 2406889519U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 89827891U;
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
