#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1878735518U;
int var_2 = -1589010820;
unsigned int var_5 = 1474701288U;
unsigned char var_6 = (unsigned char)186;
unsigned int var_7 = 877061334U;
unsigned int var_9 = 2362317645U;
unsigned long long int var_11 = 8224869363100281571ULL;
unsigned int var_12 = 2139522518U;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)61;
signed char var_15 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
