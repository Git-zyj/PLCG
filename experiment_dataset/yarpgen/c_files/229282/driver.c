#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
short var_3 = (short)-26128;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-6379;
short var_8 = (short)10992;
int zero = 0;
unsigned int var_11 = 2714497603U;
unsigned short var_12 = (unsigned short)11184;
long long int var_13 = 233884319690677526LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
