#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2419227675U;
unsigned short var_4 = (unsigned short)50565;
unsigned int var_6 = 879260983U;
int var_8 = -1847985921;
unsigned char var_14 = (unsigned char)8;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-32;
void init() {
}

void checksum() {
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
