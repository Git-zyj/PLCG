#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-19928;
unsigned short var_9 = (unsigned short)37665;
unsigned short var_11 = (unsigned short)17955;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-75;
signed char var_20 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
