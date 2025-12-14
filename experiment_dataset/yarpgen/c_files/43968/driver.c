#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16400;
unsigned long long int var_11 = 14585220876240632835ULL;
unsigned short var_12 = (unsigned short)13974;
unsigned char var_13 = (unsigned char)144;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)65;
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
