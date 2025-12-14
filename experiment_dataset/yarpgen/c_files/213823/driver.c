#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)218;
unsigned long long int var_4 = 278039505497438883ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)56090;
unsigned long long int var_12 = 1241291085996135996ULL;
short var_13 = (short)-29046;
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
