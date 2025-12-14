#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13053883112088915562ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)212;
unsigned char var_18 = (unsigned char)186;
int zero = 0;
signed char var_20 = (signed char)35;
unsigned char var_21 = (unsigned char)236;
short var_22 = (short)-15255;
signed char var_23 = (signed char)-101;
unsigned int var_24 = 2892416749U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
