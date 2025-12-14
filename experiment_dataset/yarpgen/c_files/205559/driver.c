#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_5 = (unsigned char)133;
unsigned long long int var_7 = 16833817794660143494ULL;
short var_9 = (short)-15908;
unsigned int var_12 = 2002579543U;
short var_15 = (short)-11017;
unsigned char var_17 = (unsigned char)51;
int zero = 0;
unsigned int var_18 = 2330370570U;
short var_19 = (short)8044;
short var_20 = (short)13073;
unsigned char var_21 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
