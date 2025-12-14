#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 322268703U;
unsigned int var_1 = 2203823574U;
unsigned int var_6 = 3968313285U;
unsigned char var_7 = (unsigned char)244;
signed char var_9 = (signed char)48;
int zero = 0;
unsigned long long int var_13 = 12442683203588881939ULL;
signed char var_14 = (signed char)107;
_Bool var_15 = (_Bool)0;
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
