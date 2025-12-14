#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20771;
unsigned int var_3 = 877742421U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-126;
unsigned int var_6 = 3194804727U;
long long int var_7 = 4072629210804989755LL;
int zero = 0;
signed char var_11 = (signed char)2;
unsigned int var_12 = 1466465598U;
int var_13 = -2057039810;
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
