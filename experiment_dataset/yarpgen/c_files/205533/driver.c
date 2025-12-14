#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6997;
int var_4 = 1357544139;
int var_13 = -67781321;
unsigned long long int var_15 = 11638740073205703472ULL;
int zero = 0;
short var_18 = (short)10524;
signed char var_19 = (signed char)86;
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
