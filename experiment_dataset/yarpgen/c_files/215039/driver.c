#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11584;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)135;
unsigned int var_12 = 2881775495U;
int zero = 0;
unsigned int var_19 = 964400243U;
unsigned char var_20 = (unsigned char)151;
_Bool var_21 = (_Bool)0;
short var_22 = (short)26615;
short var_23 = (short)21543;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
