#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned long long int var_1 = 4169837824693947078ULL;
_Bool var_2 = (_Bool)0;
int var_4 = -2087301086;
unsigned char var_5 = (unsigned char)5;
unsigned int var_6 = 2441151249U;
unsigned char var_7 = (unsigned char)228;
unsigned int var_8 = 1732561618U;
int zero = 0;
int var_10 = -328370217;
unsigned char var_11 = (unsigned char)56;
unsigned short var_12 = (unsigned short)17603;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
