#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -102621904999644020LL;
unsigned short var_8 = (unsigned short)12649;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1957104173U;
unsigned char var_15 = (unsigned char)241;
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
