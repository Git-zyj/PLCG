#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3163907950U;
unsigned long long int var_5 = 5641479919282675337ULL;
unsigned char var_6 = (unsigned char)110;
unsigned long long int var_7 = 9347083479498712642ULL;
signed char var_12 = (signed char)-9;
int zero = 0;
unsigned int var_13 = 1455689726U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
