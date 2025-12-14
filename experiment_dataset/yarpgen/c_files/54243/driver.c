#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26530;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-10654;
unsigned short var_3 = (unsigned short)41338;
int zero = 0;
short var_12 = (short)-25917;
unsigned short var_13 = (unsigned short)8131;
unsigned long long int var_14 = 1258596932871878780ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
