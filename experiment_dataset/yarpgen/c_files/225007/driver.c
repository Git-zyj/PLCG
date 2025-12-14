#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 671391274U;
unsigned char var_2 = (unsigned char)57;
signed char var_10 = (signed char)-24;
unsigned long long int var_11 = 16830927974898771434ULL;
int zero = 0;
short var_16 = (short)-23153;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 16741089378092129578ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
