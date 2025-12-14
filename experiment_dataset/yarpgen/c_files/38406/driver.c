#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 280644978U;
unsigned long long int var_10 = 14484060919002924374ULL;
signed char var_15 = (signed char)85;
int zero = 0;
unsigned long long int var_16 = 16038763287052535391ULL;
short var_17 = (short)1114;
void init() {
}

void checksum() {
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
