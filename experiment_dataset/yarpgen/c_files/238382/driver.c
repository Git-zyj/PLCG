#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64454;
unsigned int var_2 = 368372584U;
unsigned short var_3 = (unsigned short)34034;
unsigned int var_6 = 1965732023U;
unsigned short var_8 = (unsigned short)27839;
unsigned short var_11 = (unsigned short)34339;
unsigned char var_12 = (unsigned char)80;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -118663302;
unsigned int var_15 = 4096830585U;
unsigned short var_16 = (unsigned short)23208;
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
