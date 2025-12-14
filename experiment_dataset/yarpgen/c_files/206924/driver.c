#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned int var_1 = 3998498519U;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)155;
long long int var_11 = -3310138968258657807LL;
int zero = 0;
signed char var_12 = (signed char)-7;
unsigned char var_13 = (unsigned char)102;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-19977;
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
