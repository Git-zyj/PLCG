#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
short var_1 = (short)-26958;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 8604398042794833144ULL;
signed char var_15 = (signed char)-36;
int zero = 0;
unsigned short var_17 = (unsigned short)17921;
signed char var_18 = (signed char)3;
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
