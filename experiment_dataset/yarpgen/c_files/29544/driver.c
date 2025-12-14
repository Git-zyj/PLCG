#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -647195640;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)41;
long long int var_7 = -6125467759878866474LL;
short var_9 = (short)8559;
unsigned int var_12 = 872569166U;
int zero = 0;
int var_13 = -1496235288;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
