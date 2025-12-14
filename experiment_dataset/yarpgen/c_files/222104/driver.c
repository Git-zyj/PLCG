#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4276833137U;
unsigned int var_2 = 2429475375U;
unsigned int var_8 = 3746802029U;
unsigned int var_13 = 2074179255U;
int zero = 0;
signed char var_20 = (signed char)-121;
unsigned int var_21 = 1527716861U;
short var_22 = (short)21727;
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
