#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_6 = (short)20902;
unsigned short var_11 = (unsigned short)53922;
long long int var_12 = -6391413871870765922LL;
unsigned char var_16 = (unsigned char)82;
unsigned long long int var_17 = 17622740257964872807ULL;
int zero = 0;
long long int var_20 = -8928157591716339422LL;
unsigned long long int var_21 = 13678625909677763408ULL;
unsigned int var_22 = 1141848005U;
signed char var_23 = (signed char)-61;
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
