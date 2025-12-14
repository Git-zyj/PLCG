#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
int var_2 = 1627862903;
short var_4 = (short)-28704;
int var_5 = 1923605033;
unsigned char var_12 = (unsigned char)194;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)31874;
short var_15 = (short)-2214;
unsigned long long int var_16 = 7528820743037321997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
