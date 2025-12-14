#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)62;
signed char var_8 = (signed char)-104;
unsigned int var_12 = 1972186747U;
unsigned char var_14 = (unsigned char)244;
signed char var_15 = (signed char)29;
int zero = 0;
long long int var_17 = 6718851047743173355LL;
unsigned short var_18 = (unsigned short)46211;
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
