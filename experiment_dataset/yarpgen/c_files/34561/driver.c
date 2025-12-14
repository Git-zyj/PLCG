#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
unsigned char var_1 = (unsigned char)64;
_Bool var_2 = (_Bool)0;
unsigned int var_8 = 2856035533U;
_Bool var_11 = (_Bool)1;
int var_16 = 1658285535;
unsigned char var_18 = (unsigned char)188;
unsigned char var_19 = (unsigned char)44;
int zero = 0;
unsigned int var_20 = 199502853U;
unsigned char var_21 = (unsigned char)136;
unsigned int var_22 = 447588893U;
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
