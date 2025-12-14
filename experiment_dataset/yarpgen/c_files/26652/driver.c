#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)155;
unsigned int var_6 = 10753437U;
long long int var_8 = 219218848019419634LL;
long long int var_9 = 2927862823278606158LL;
long long int var_11 = 4920718283178377636LL;
unsigned int var_12 = 878976044U;
unsigned long long int var_16 = 14032633555889857817ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)44323;
short var_18 = (short)-3470;
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
