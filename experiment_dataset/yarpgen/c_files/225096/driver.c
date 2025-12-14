#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14160;
unsigned int var_2 = 1712042755U;
unsigned int var_3 = 3439217549U;
unsigned int var_5 = 3473160576U;
int var_9 = 132440788;
short var_10 = (short)-20927;
int zero = 0;
short var_14 = (short)-11162;
signed char var_15 = (signed char)54;
short var_16 = (short)-29506;
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
