#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3285491640U;
unsigned char var_1 = (unsigned char)9;
int var_3 = -171638753;
unsigned short var_5 = (unsigned short)311;
signed char var_6 = (signed char)-34;
unsigned long long int var_10 = 4727589334434038160ULL;
long long int var_11 = -4027722417936964326LL;
unsigned int var_18 = 2019896368U;
int zero = 0;
short var_20 = (short)-2151;
unsigned char var_21 = (unsigned char)176;
unsigned long long int var_22 = 16157519225576849745ULL;
short var_23 = (short)26922;
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
