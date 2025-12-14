#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31092;
signed char var_7 = (signed char)126;
short var_8 = (short)-31409;
signed char var_9 = (signed char)108;
int zero = 0;
signed char var_11 = (signed char)-25;
int var_12 = 123234362;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
