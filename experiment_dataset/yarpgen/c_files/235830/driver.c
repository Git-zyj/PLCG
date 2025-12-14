#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4130273678U;
short var_4 = (short)-31812;
unsigned int var_6 = 2887203474U;
short var_9 = (short)22378;
int zero = 0;
unsigned short var_20 = (unsigned short)61759;
unsigned short var_21 = (unsigned short)27052;
_Bool var_22 = (_Bool)1;
short var_23 = (short)25634;
int var_24 = -440074474;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
