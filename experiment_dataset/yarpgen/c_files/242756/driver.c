#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
signed char var_8 = (signed char)-57;
unsigned int var_12 = 4156477551U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)143;
short var_21 = (short)27095;
unsigned int var_22 = 3477211074U;
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
