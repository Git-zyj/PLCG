#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7472;
signed char var_3 = (signed char)14;
signed char var_13 = (signed char)36;
int zero = 0;
unsigned long long int var_20 = 5386320961274761680ULL;
unsigned short var_21 = (unsigned short)28004;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
