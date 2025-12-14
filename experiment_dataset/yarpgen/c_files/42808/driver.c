#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)53;
signed char var_4 = (signed char)-48;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 663114683U;
unsigned int var_17 = 363755530U;
unsigned char var_18 = (unsigned char)251;
signed char var_19 = (signed char)19;
unsigned char var_20 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
