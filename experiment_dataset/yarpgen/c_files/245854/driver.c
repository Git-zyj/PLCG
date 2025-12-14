#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2459878591137654845LL;
int var_1 = -1700701324;
int var_2 = -1639895300;
short var_7 = (short)5137;
signed char var_8 = (signed char)13;
unsigned int var_13 = 1891297255U;
int var_14 = 1045689761;
int zero = 0;
long long int var_17 = -936216557039403722LL;
unsigned short var_18 = (unsigned short)32448;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
