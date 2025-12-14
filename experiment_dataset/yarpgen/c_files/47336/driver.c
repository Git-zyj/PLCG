#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15887773071267845118ULL;
signed char var_4 = (signed char)-49;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3843087907U;
unsigned char var_15 = (unsigned char)191;
unsigned int var_16 = 2067650453U;
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
