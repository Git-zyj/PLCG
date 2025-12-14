#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)81;
unsigned int var_5 = 1897911397U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)108;
int zero = 0;
short var_12 = (short)-481;
short var_13 = (short)-21080;
unsigned short var_14 = (unsigned short)43466;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
