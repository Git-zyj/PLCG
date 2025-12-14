#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19056;
long long int var_5 = -2533470195897887237LL;
signed char var_8 = (signed char)98;
unsigned short var_10 = (unsigned short)36155;
unsigned char var_12 = (unsigned char)221;
int zero = 0;
unsigned long long int var_16 = 1616511872238666837ULL;
unsigned long long int var_17 = 15407420991795495992ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-16387;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
