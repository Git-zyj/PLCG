#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
unsigned long long int var_4 = 4725517081946560114ULL;
_Bool var_6 = (_Bool)1;
short var_11 = (short)14702;
long long int var_12 = -2934913176698357150LL;
long long int var_13 = -8790721868774645184LL;
int zero = 0;
unsigned char var_16 = (unsigned char)159;
unsigned long long int var_17 = 15742619806784359560ULL;
unsigned int var_18 = 2194514800U;
void init() {
}

void checksum() {
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
