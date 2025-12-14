#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 296074446U;
unsigned short var_1 = (unsigned short)64756;
unsigned char var_2 = (unsigned char)34;
unsigned int var_5 = 2494750489U;
short var_11 = (short)14697;
int zero = 0;
unsigned short var_18 = (unsigned short)29541;
short var_19 = (short)22651;
short var_20 = (short)-19070;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
