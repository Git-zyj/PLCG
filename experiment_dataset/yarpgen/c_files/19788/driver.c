#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3514206334U;
unsigned int var_4 = 2789776076U;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5743810788278198384ULL;
unsigned long long int var_13 = 5979625857153552749ULL;
int zero = 0;
short var_19 = (short)-12536;
unsigned char var_20 = (unsigned char)134;
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
