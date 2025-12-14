#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51792;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 14329359587508572018ULL;
short var_9 = (short)21874;
unsigned long long int var_11 = 894074847569283494ULL;
int zero = 0;
short var_12 = (short)24254;
signed char var_13 = (signed char)4;
void init() {
}

void checksum() {
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
