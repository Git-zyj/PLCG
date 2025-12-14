#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)51347;
unsigned char var_8 = (unsigned char)56;
signed char var_12 = (signed char)32;
unsigned short var_13 = (unsigned short)51761;
int zero = 0;
unsigned int var_20 = 2240087370U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
