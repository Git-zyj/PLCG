#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3500633743U;
short var_9 = (short)-29310;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 889054734768061378ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)236;
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
