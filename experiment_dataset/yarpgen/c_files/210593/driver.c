#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_17 = (unsigned char)221;
unsigned int var_18 = 2099215059U;
short var_19 = (short)24326;
int zero = 0;
short var_20 = (short)-11622;
short var_21 = (short)-13406;
_Bool var_22 = (_Bool)1;
long long int var_23 = -3957363086939818721LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
