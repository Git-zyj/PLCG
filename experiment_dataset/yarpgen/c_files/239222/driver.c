#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1538783232708714728LL;
signed char var_1 = (signed char)24;
signed char var_6 = (signed char)25;
int var_14 = -103189572;
int zero = 0;
unsigned short var_15 = (unsigned short)11211;
signed char var_16 = (signed char)31;
void init() {
}

void checksum() {
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
