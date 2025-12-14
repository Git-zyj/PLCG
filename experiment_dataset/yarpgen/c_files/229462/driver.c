#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8955182083028468925LL;
unsigned short var_4 = (unsigned short)21686;
short var_7 = (short)-30758;
long long int var_11 = -2319312315070507976LL;
int zero = 0;
unsigned long long int var_13 = 13915330500418102288ULL;
int var_14 = 1728541949;
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
