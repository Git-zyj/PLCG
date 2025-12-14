#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1521572175;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 775530500U;
unsigned int var_10 = 1531059174U;
int zero = 0;
unsigned short var_14 = (unsigned short)11914;
unsigned short var_15 = (unsigned short)22787;
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
