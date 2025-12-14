#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_17 = (signed char)-40;
int zero = 0;
int var_19 = -435232117;
short var_20 = (short)-3313;
unsigned int var_21 = 157183540U;
unsigned long long int var_22 = 8667699606818869140ULL;
unsigned int var_23 = 2462146632U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
