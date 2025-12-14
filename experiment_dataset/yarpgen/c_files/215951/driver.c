#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1229457045U;
signed char var_5 = (signed char)8;
unsigned int var_9 = 3912468443U;
int zero = 0;
signed char var_12 = (signed char)104;
unsigned long long int var_13 = 16368415894155988532ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
