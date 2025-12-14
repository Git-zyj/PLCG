#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12313;
signed char var_1 = (signed char)120;
signed char var_5 = (signed char)72;
unsigned int var_6 = 4156127733U;
signed char var_7 = (signed char)30;
int zero = 0;
signed char var_11 = (signed char)123;
long long int var_12 = -8869094521316733994LL;
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
