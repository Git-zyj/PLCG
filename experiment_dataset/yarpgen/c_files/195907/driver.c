#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)90;
int var_4 = -1140766171;
long long int var_7 = -2129548307820546181LL;
int zero = 0;
unsigned int var_12 = 1173195959U;
short var_13 = (short)-19118;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)67;
int var_16 = 1694745025;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
