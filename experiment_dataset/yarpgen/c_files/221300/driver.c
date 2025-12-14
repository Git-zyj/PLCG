#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3066800073U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 4158344979U;
unsigned int var_6 = 3316165172U;
unsigned int var_13 = 1574806326U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1744249456U;
_Bool var_20 = (_Bool)1;
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
