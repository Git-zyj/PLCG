#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 107447682;
_Bool var_5 = (_Bool)1;
unsigned char var_10 = (unsigned char)186;
long long int var_11 = -2107582930332860046LL;
long long int var_12 = 3406559598072591256LL;
int zero = 0;
short var_13 = (short)-558;
unsigned short var_14 = (unsigned short)24301;
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
