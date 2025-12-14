#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39063;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)156;
unsigned short var_10 = (unsigned short)29935;
int zero = 0;
short var_11 = (short)20520;
short var_12 = (short)-12639;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
