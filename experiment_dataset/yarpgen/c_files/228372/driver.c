#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2227106414U;
signed char var_11 = (signed char)-41;
unsigned short var_13 = (unsigned short)7555;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-7490;
unsigned short var_21 = (unsigned short)6836;
void init() {
}

void checksum() {
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
