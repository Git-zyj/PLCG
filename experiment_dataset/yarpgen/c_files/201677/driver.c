#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_1 = (short)-15583;
unsigned int var_2 = 2415356757U;
unsigned int var_5 = 3632155876U;
short var_7 = (short)10903;
short var_9 = (short)13553;
unsigned int var_11 = 3090950331U;
int zero = 0;
short var_14 = (short)25101;
unsigned int var_15 = 402134214U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
