#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned int var_4 = 2553917523U;
unsigned int var_6 = 728445808U;
unsigned int var_12 = 2460445135U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)51319;
signed char var_16 = (signed char)70;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-70;
int var_21 = 950469617;
signed char var_22 = (signed char)-57;
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
