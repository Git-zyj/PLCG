#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5087722444322216930LL;
long long int var_4 = -4880094698440904807LL;
short var_9 = (short)-26261;
long long int var_10 = -3912990372558477121LL;
short var_13 = (short)-4080;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-3029;
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
