#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7304966376460833308ULL;
unsigned short var_1 = (unsigned short)7196;
short var_10 = (short)-1525;
unsigned char var_13 = (unsigned char)172;
signed char var_14 = (signed char)-72;
int zero = 0;
unsigned short var_16 = (unsigned short)52941;
short var_17 = (short)3589;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)122;
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
