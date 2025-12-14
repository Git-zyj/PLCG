#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned short var_1 = (unsigned short)60339;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)53;
unsigned int var_8 = 3923231561U;
int zero = 0;
signed char var_13 = (signed char)-123;
unsigned char var_14 = (unsigned char)27;
unsigned int var_15 = 1651002545U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
