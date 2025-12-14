#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3382676190U;
int var_3 = 929092142;
unsigned short var_6 = (unsigned short)41976;
long long int var_7 = -597023955168739127LL;
long long int var_9 = -6667323959543474536LL;
unsigned short var_10 = (unsigned short)40491;
signed char var_12 = (signed char)-21;
long long int var_13 = -7206565938221952364LL;
int zero = 0;
unsigned short var_14 = (unsigned short)28608;
signed char var_15 = (signed char)-78;
long long int var_16 = 3265196447238982121LL;
long long int var_17 = -5701591159406035499LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
