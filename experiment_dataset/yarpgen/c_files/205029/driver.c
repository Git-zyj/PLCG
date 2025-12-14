#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
signed char var_1 = (signed char)-94;
short var_4 = (short)-4394;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1385669323U;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_15 = (short)-30719;
short var_16 = (short)-13474;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
