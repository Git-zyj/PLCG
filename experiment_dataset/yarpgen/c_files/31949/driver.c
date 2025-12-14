#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 19317295U;
unsigned int var_1 = 2490009956U;
unsigned long long int var_4 = 12007911258629910949ULL;
unsigned long long int var_5 = 10499513594569495916ULL;
unsigned short var_6 = (unsigned short)29654;
unsigned short var_12 = (unsigned short)43142;
unsigned int var_14 = 2700964938U;
short var_15 = (short)1193;
int zero = 0;
unsigned int var_16 = 2997063863U;
signed char var_17 = (signed char)-85;
unsigned short var_18 = (unsigned short)26897;
unsigned short var_19 = (unsigned short)40711;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
