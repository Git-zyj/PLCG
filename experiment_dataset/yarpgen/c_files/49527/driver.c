#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)25422;
long long int var_3 = 3971232358923549464LL;
unsigned char var_4 = (unsigned char)10;
int var_5 = -1539647343;
short var_8 = (short)27442;
unsigned char var_9 = (unsigned char)154;
unsigned int var_10 = 3580584752U;
int zero = 0;
unsigned char var_11 = (unsigned char)117;
unsigned int var_12 = 2984019532U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3412671162U;
long long int var_15 = -2118194895043359607LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
