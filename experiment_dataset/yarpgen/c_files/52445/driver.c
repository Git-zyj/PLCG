#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 343054750U;
unsigned long long int var_7 = 17070732775275465386ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)171;
unsigned short var_17 = (unsigned short)42925;
unsigned char var_18 = (unsigned char)96;
signed char var_19 = (signed char)-43;
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
