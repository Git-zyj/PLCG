#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16992;
short var_2 = (short)6535;
int var_4 = -765034164;
_Bool var_5 = (_Bool)1;
int zero = 0;
short var_10 = (short)-24416;
unsigned long long int var_11 = 13893647417237126699ULL;
short var_12 = (short)15714;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
