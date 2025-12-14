#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15013;
long long int var_2 = -2890011472728177173LL;
int var_5 = 974655457;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1385054015U;
unsigned char var_10 = (unsigned char)77;
int var_11 = 2030832939;
unsigned long long int var_12 = 18189465062922959365ULL;
unsigned short var_13 = (unsigned short)18836;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1573550049U;
signed char var_16 = (signed char)58;
unsigned short var_17 = (unsigned short)35522;
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
