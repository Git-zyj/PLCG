#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18483;
unsigned char var_5 = (unsigned char)19;
short var_14 = (short)19961;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
unsigned short var_18 = (unsigned short)38511;
signed char var_19 = (signed char)-118;
_Bool var_20 = (_Bool)0;
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
