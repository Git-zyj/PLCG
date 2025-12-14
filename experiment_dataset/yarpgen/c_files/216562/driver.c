#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2079635181;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)44;
int zero = 0;
unsigned long long int var_11 = 1090046255331488042ULL;
short var_12 = (short)-15280;
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
