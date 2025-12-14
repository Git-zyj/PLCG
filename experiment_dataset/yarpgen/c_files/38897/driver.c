#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
int var_1 = -1641704050;
int var_2 = -2050419838;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)239;
int var_8 = 23586083;
int zero = 0;
int var_11 = 1854105482;
unsigned long long int var_12 = 10557122960059148793ULL;
short var_13 = (short)-2004;
short var_14 = (short)4055;
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
