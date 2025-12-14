#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 659856187U;
unsigned int var_3 = 1715914464U;
unsigned int var_4 = 3456138894U;
unsigned int var_5 = 1882052652U;
unsigned int var_6 = 2813653106U;
unsigned int var_9 = 1898072432U;
unsigned int var_10 = 1140969047U;
unsigned int var_12 = 2650653819U;
unsigned int var_13 = 3705789954U;
unsigned int var_14 = 3414415172U;
int zero = 0;
unsigned int var_15 = 2903183015U;
unsigned int var_16 = 2942440735U;
unsigned int var_17 = 2319127200U;
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
