#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39865;
_Bool var_4 = (_Bool)1;
long long int var_7 = 59655077312252504LL;
short var_10 = (short)32659;
long long int var_11 = 1670161421120307426LL;
int zero = 0;
unsigned char var_12 = (unsigned char)53;
long long int var_13 = 7739451706255607889LL;
void init() {
}

void checksum() {
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
