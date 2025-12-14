#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -759860868250252681LL;
signed char var_4 = (signed char)11;
short var_5 = (short)966;
short var_7 = (short)-20882;
unsigned char var_10 = (unsigned char)69;
unsigned short var_13 = (unsigned short)24807;
unsigned char var_14 = (unsigned char)194;
int zero = 0;
long long int var_18 = -3757581177004369903LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
