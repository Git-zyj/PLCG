#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
signed char var_3 = (signed char)97;
unsigned int var_5 = 2345326402U;
unsigned short var_17 = (unsigned short)24661;
int zero = 0;
unsigned short var_18 = (unsigned short)48679;
int var_19 = -997713675;
unsigned short var_20 = (unsigned short)5848;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
