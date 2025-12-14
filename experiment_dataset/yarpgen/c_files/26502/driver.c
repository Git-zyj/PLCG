#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16963934208055841803ULL;
unsigned short var_9 = (unsigned short)30732;
_Bool var_12 = (_Bool)0;
unsigned char var_18 = (unsigned char)30;
int zero = 0;
unsigned long long int var_19 = 5006113721087745995ULL;
unsigned long long int var_20 = 2933887899540656157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
