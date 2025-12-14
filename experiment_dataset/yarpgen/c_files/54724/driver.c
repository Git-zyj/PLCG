#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2677778931U;
long long int var_5 = -8149081685416833345LL;
int var_7 = -896682390;
signed char var_8 = (signed char)54;
unsigned int var_11 = 3434693427U;
int zero = 0;
unsigned short var_12 = (unsigned short)55180;
_Bool var_13 = (_Bool)0;
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
