#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 314350756;
short var_8 = (short)-7928;
signed char var_9 = (signed char)-31;
unsigned int var_10 = 2938134385U;
int var_11 = -1675619902;
int zero = 0;
int var_14 = 1851107248;
signed char var_15 = (signed char)-10;
short var_16 = (short)-16351;
short var_17 = (short)25098;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
