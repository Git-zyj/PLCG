#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
int var_3 = -842443921;
unsigned char var_4 = (unsigned char)169;
signed char var_7 = (signed char)63;
unsigned long long int var_8 = 1256403565850591836ULL;
unsigned long long int var_9 = 18100232619195136363ULL;
unsigned short var_11 = (unsigned short)29753;
unsigned short var_14 = (unsigned short)33283;
short var_15 = (short)11461;
int zero = 0;
unsigned short var_16 = (unsigned short)11573;
short var_17 = (short)-3715;
unsigned int var_18 = 2780722791U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
