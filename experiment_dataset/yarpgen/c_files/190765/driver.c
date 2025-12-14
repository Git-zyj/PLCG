#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53432;
unsigned short var_7 = (unsigned short)22483;
unsigned int var_13 = 2198534618U;
unsigned int var_16 = 1578628398U;
int zero = 0;
short var_18 = (short)-702;
unsigned int var_19 = 3864751007U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
