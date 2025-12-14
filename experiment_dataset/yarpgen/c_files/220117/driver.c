#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -307676405805636729LL;
short var_4 = (short)-8416;
long long int var_5 = -8860475852364634755LL;
int var_6 = -1940257842;
int var_8 = -1428708338;
int var_10 = 911620309;
int zero = 0;
short var_11 = (short)1978;
unsigned short var_12 = (unsigned short)6730;
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
