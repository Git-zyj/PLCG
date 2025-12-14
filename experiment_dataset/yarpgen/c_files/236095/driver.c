#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned char var_4 = (unsigned char)117;
_Bool var_6 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 373125484;
int var_12 = 974177733;
unsigned long long int var_13 = 8025162835478057511ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
