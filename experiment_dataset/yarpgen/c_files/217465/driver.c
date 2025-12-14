#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4383;
long long int var_7 = 922076480188771274LL;
unsigned short var_11 = (unsigned short)50743;
int zero = 0;
unsigned char var_13 = (unsigned char)96;
long long int var_14 = 139844727558951345LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4763232799470175582ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
