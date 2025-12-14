#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
signed char var_6 = (signed char)-125;
signed char var_8 = (signed char)-91;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_15 = (short)29238;
signed char var_16 = (signed char)-108;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
