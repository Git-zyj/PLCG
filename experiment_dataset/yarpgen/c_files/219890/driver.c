#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
short var_4 = (short)29699;
unsigned short var_5 = (unsigned short)17657;
int var_6 = -1497142602;
unsigned short var_7 = (unsigned short)28138;
unsigned int var_10 = 79785199U;
int zero = 0;
signed char var_13 = (signed char)102;
int var_14 = 1267874254;
signed char var_15 = (signed char)-97;
void init() {
}

void checksum() {
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
