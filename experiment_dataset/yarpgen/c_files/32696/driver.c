#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 478734039U;
unsigned long long int var_4 = 7366872806809462605ULL;
short var_7 = (short)6912;
unsigned short var_13 = (unsigned short)17902;
int zero = 0;
signed char var_14 = (signed char)-71;
unsigned short var_15 = (unsigned short)37511;
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
