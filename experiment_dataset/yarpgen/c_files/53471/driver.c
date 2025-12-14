#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 258271912U;
unsigned short var_6 = (unsigned short)35493;
unsigned long long int var_13 = 15451249728502914693ULL;
unsigned int var_16 = 4030110021U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)39264;
unsigned long long int var_19 = 9623801037033139258ULL;
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
