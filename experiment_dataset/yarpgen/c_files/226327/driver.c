#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1228457136;
long long int var_1 = 1941130310176635909LL;
unsigned long long int var_2 = 14565218421621005016ULL;
unsigned char var_5 = (unsigned char)176;
unsigned char var_6 = (unsigned char)77;
short var_9 = (short)2165;
long long int var_11 = 7185758673274022165LL;
int zero = 0;
signed char var_12 = (signed char)59;
unsigned int var_13 = 3640404764U;
signed char var_14 = (signed char)45;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
