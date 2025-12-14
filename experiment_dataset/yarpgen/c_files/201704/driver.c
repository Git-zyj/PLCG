#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27008;
short var_2 = (short)19525;
int var_5 = -1391493105;
short var_8 = (short)32560;
int zero = 0;
signed char var_15 = (signed char)127;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-11330;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
