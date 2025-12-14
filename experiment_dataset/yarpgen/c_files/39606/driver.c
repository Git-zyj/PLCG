#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_8 = (unsigned short)14078;
signed char var_11 = (signed char)-10;
short var_15 = (short)-15143;
int zero = 0;
unsigned short var_18 = (unsigned short)41450;
unsigned short var_19 = (unsigned short)25606;
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
