#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
short var_9 = (short)-24209;
unsigned short var_10 = (unsigned short)48952;
int zero = 0;
unsigned long long int var_14 = 17766479898533014107ULL;
unsigned long long int var_15 = 3629951824957914656ULL;
unsigned long long int var_16 = 16116154415371958896ULL;
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
