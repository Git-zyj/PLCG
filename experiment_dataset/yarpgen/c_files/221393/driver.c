#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2990715;
unsigned short var_2 = (unsigned short)5645;
unsigned int var_4 = 2171381883U;
int var_8 = 67076373;
short var_11 = (short)-5182;
unsigned short var_13 = (unsigned short)44926;
int zero = 0;
unsigned int var_17 = 3853193713U;
short var_18 = (short)23511;
long long int var_19 = 2362403102382350965LL;
unsigned short var_20 = (unsigned short)5147;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
