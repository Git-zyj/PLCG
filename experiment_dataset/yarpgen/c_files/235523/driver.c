#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)130;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)180;
signed char var_10 = (signed char)-31;
short var_14 = (short)15836;
signed char var_15 = (signed char)24;
int zero = 0;
unsigned int var_17 = 1593246345U;
signed char var_18 = (signed char)-89;
void init() {
}

void checksum() {
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
