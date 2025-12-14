#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)109;
unsigned short var_3 = (unsigned short)31876;
short var_4 = (short)-28496;
unsigned char var_6 = (unsigned char)133;
int zero = 0;
int var_10 = 2069981832;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)67;
short var_13 = (short)13169;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
