#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-95;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2469154209U;
int zero = 0;
int var_11 = -614038811;
unsigned short var_12 = (unsigned short)18248;
signed char var_13 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
