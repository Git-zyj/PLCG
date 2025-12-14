#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6758;
unsigned long long int var_2 = 642063676584489985ULL;
unsigned int var_4 = 175537907U;
short var_6 = (short)-12005;
int var_9 = 647699718;
int zero = 0;
short var_11 = (short)-9431;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
