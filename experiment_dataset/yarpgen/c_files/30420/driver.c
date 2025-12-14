#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
long long int var_2 = -6418681638770456689LL;
long long int var_3 = 1915186790963333277LL;
unsigned int var_6 = 1785804359U;
short var_7 = (short)-14747;
unsigned long long int var_8 = 5024543949456343658ULL;
signed char var_9 = (signed char)110;
int zero = 0;
unsigned long long int var_11 = 6342880321032376065ULL;
short var_12 = (short)23605;
_Bool var_13 = (_Bool)1;
short var_14 = (short)23443;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
