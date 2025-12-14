#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 205414493U;
short var_2 = (short)-31375;
int var_4 = -667144120;
_Bool var_5 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)89;
signed char var_12 = (signed char)75;
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
