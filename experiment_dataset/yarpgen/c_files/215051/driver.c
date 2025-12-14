#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 726530868;
int var_4 = -439897362;
short var_7 = (short)19654;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
short var_10 = (short)30727;
int zero = 0;
short var_14 = (short)27945;
unsigned long long int var_15 = 16237823673899094023ULL;
signed char var_16 = (signed char)58;
unsigned int var_17 = 2811814296U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
