#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6269847642525579574LL;
signed char var_14 = (signed char)5;
short var_15 = (short)-16588;
int zero = 0;
unsigned short var_19 = (unsigned short)58910;
signed char var_20 = (signed char)21;
unsigned int var_21 = 2226799826U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
