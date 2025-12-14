#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)36;
signed char var_11 = (signed char)-95;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-21937;
int zero = 0;
unsigned short var_14 = (unsigned short)59962;
int var_15 = 1468511687;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
