#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61148;
unsigned int var_2 = 1755670490U;
long long int var_3 = -49127394012559979LL;
unsigned int var_17 = 2383561670U;
int zero = 0;
signed char var_18 = (signed char)-50;
short var_19 = (short)-58;
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
