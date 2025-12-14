#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16509;
signed char var_3 = (signed char)67;
_Bool var_8 = (_Bool)0;
int var_17 = -1028185793;
int zero = 0;
short var_20 = (short)-16611;
signed char var_21 = (signed char)-7;
int var_22 = -1716946950;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
