#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17063;
short var_2 = (short)-26938;
unsigned char var_3 = (unsigned char)59;
unsigned char var_5 = (unsigned char)170;
long long int var_10 = -2062886891714614735LL;
unsigned int var_12 = 821103113U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)63024;
unsigned short var_17 = (unsigned short)15722;
unsigned short var_18 = (unsigned short)15660;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
