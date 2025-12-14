#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2930317361U;
int var_2 = -1315906850;
unsigned long long int var_4 = 10099748739807547968ULL;
int var_5 = -1256112498;
unsigned long long int var_6 = 9792597419663151211ULL;
short var_8 = (short)-4048;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14541731885811883110ULL;
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
