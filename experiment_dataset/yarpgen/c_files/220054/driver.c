#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6112;
unsigned short var_3 = (unsigned short)33489;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-10720;
unsigned char var_11 = (unsigned char)123;
int zero = 0;
unsigned short var_12 = (unsigned short)5557;
unsigned short var_13 = (unsigned short)10688;
_Bool var_14 = (_Bool)0;
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
