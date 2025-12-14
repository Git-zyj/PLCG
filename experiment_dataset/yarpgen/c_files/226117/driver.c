#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2967819436U;
unsigned char var_5 = (unsigned char)167;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 14274598523126988292ULL;
signed char var_16 = (signed char)-75;
signed char var_17 = (signed char)102;
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
