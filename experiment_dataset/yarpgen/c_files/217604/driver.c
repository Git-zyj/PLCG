#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16050232960879966633ULL;
unsigned char var_6 = (unsigned char)9;
unsigned char var_10 = (unsigned char)236;
unsigned char var_11 = (unsigned char)63;
unsigned long long int var_14 = 8123445667878718202ULL;
int zero = 0;
short var_17 = (short)15724;
_Bool var_18 = (_Bool)1;
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
