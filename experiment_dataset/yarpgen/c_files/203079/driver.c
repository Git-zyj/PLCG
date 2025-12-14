#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_11 = 1882139253U;
int var_16 = 1659236270;
unsigned int var_19 = 388636081U;
int zero = 0;
int var_20 = 53293689;
unsigned short var_21 = (unsigned short)20500;
signed char var_22 = (signed char)-46;
short var_23 = (short)-1569;
void init() {
}

void checksum() {
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
