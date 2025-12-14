#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_6 = (unsigned short)6071;
short var_7 = (short)-3137;
long long int var_10 = 5078520117160474844LL;
unsigned short var_11 = (unsigned short)44682;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_20 = (short)-23344;
unsigned short var_21 = (unsigned short)6774;
void init() {
}

void checksum() {
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
