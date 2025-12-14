#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 251856824U;
long long int var_8 = -6095636470134993265LL;
int var_10 = -1422429491;
int zero = 0;
unsigned short var_11 = (unsigned short)62289;
unsigned short var_12 = (unsigned short)25225;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
