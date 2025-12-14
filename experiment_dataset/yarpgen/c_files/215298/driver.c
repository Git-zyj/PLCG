#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21911;
unsigned short var_3 = (unsigned short)8758;
unsigned int var_16 = 2883672168U;
int zero = 0;
int var_19 = 1581900666;
unsigned int var_20 = 1822036643U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
