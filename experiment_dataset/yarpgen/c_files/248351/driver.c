#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
signed char var_2 = (signed char)33;
unsigned short var_7 = (unsigned short)12077;
unsigned long long int var_11 = 13091955814286529695ULL;
unsigned short var_12 = (unsigned short)60187;
int var_13 = -1683992671;
unsigned char var_14 = (unsigned char)77;
int zero = 0;
unsigned short var_16 = (unsigned short)47408;
short var_17 = (short)129;
signed char var_18 = (signed char)89;
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
