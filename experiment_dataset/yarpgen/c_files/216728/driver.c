#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1410798456U;
unsigned int var_10 = 4123463975U;
unsigned int var_11 = 3212642640U;
unsigned int var_14 = 1589230983U;
unsigned int var_16 = 275241667U;
int zero = 0;
unsigned int var_20 = 857406302U;
unsigned int var_21 = 2875305598U;
unsigned int var_22 = 326331828U;
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
