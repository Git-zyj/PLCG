#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13858;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1873788229U;
unsigned int var_7 = 1431096082U;
signed char var_8 = (signed char)-115;
int zero = 0;
signed char var_13 = (signed char)-85;
signed char var_14 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
