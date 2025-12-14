#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
long long int var_3 = 494818515853201619LL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)8;
unsigned char var_10 = (unsigned char)68;
unsigned char var_12 = (unsigned char)52;
int zero = 0;
unsigned short var_13 = (unsigned short)42321;
signed char var_14 = (signed char)126;
void init() {
}

void checksum() {
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
