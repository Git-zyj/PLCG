#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1508100247;
unsigned long long int var_4 = 13526581280918192561ULL;
unsigned short var_5 = (unsigned short)57942;
signed char var_7 = (signed char)-96;
_Bool var_10 = (_Bool)1;
unsigned short var_16 = (unsigned short)5990;
int zero = 0;
unsigned int var_17 = 2621745653U;
long long int var_18 = -4769368952433073552LL;
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
