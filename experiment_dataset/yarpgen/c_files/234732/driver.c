#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1861080027439492155LL;
unsigned char var_5 = (unsigned char)124;
signed char var_10 = (signed char)77;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-94;
unsigned short var_15 = (unsigned short)28059;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
