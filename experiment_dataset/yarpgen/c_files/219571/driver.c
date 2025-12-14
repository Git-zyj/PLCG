#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
long long int var_2 = 370089488865663318LL;
int var_3 = 1316400310;
unsigned char var_4 = (unsigned char)123;
unsigned char var_6 = (unsigned char)23;
unsigned int var_7 = 4054871831U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)23406;
short var_12 = (short)30172;
unsigned int var_13 = 2813935132U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
