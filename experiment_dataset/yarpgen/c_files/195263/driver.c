#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
short var_2 = (short)-13374;
unsigned int var_3 = 494091747U;
unsigned short var_4 = (unsigned short)25077;
int var_9 = 206539607;
unsigned char var_10 = (unsigned char)48;
int var_11 = 522542702;
int zero = 0;
unsigned char var_12 = (unsigned char)44;
unsigned char var_13 = (unsigned char)170;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
