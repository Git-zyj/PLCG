#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7041142679813177449LL;
unsigned char var_2 = (unsigned char)244;
long long int var_4 = 2102397278088377965LL;
signed char var_6 = (signed char)25;
unsigned long long int var_17 = 15345478065358367295ULL;
int zero = 0;
long long int var_18 = 5333598565475929587LL;
unsigned int var_19 = 2581722504U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
