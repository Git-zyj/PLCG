#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -352160524;
int var_9 = -1905103286;
signed char var_11 = (signed char)111;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-80;
unsigned short var_14 = (unsigned short)48986;
short var_15 = (short)-14070;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
