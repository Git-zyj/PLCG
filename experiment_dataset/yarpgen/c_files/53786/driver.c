#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5310146114265101236ULL;
unsigned short var_4 = (unsigned short)53626;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)6;
long long int var_8 = 641956342236141474LL;
unsigned short var_10 = (unsigned short)1852;
int zero = 0;
int var_11 = -1468711070;
unsigned int var_12 = 2089422722U;
long long int var_13 = 8518503142077980410LL;
void init() {
}

void checksum() {
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
