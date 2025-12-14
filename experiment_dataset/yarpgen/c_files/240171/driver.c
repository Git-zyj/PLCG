#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
long long int var_3 = 6630911943066271232LL;
long long int var_6 = 1278028579702908532LL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)31311;
int zero = 0;
unsigned short var_13 = (unsigned short)65507;
unsigned char var_14 = (unsigned char)62;
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
