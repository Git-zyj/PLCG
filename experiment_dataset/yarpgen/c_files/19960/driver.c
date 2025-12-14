#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 855050371U;
int var_10 = 1038403385;
unsigned int var_11 = 599626846U;
short var_12 = (short)6254;
int zero = 0;
unsigned long long int var_13 = 12177760661086966291ULL;
unsigned int var_14 = 2562100609U;
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
