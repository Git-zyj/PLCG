#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32311;
signed char var_1 = (signed char)65;
int var_3 = 736241910;
signed char var_6 = (signed char)15;
unsigned short var_8 = (unsigned short)58336;
int var_10 = 1036756768;
int var_12 = 342091715;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-107;
unsigned short var_16 = (unsigned short)19283;
int var_17 = -796194710;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
