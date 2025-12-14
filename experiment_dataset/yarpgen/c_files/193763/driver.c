#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned int var_2 = 2168854223U;
_Bool var_3 = (_Bool)1;
long long int var_4 = -790692591067614756LL;
int var_6 = -1198068112;
short var_7 = (short)-2175;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)39;
long long int var_10 = -1503993825135381540LL;
int zero = 0;
short var_11 = (short)31939;
unsigned short var_12 = (unsigned short)36439;
short var_13 = (short)-9768;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
