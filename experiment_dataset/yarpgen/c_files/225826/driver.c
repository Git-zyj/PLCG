#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 878982288147669320LL;
unsigned short var_2 = (unsigned short)64731;
short var_3 = (short)26342;
_Bool var_6 = (_Bool)0;
short var_7 = (short)8582;
int var_8 = -1321673182;
short var_10 = (short)-5550;
int zero = 0;
unsigned short var_11 = (unsigned short)29446;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
