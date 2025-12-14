#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)664;
_Bool var_3 = (_Bool)1;
short var_6 = (short)22794;
long long int var_9 = 6870498093076294251LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)10;
short var_14 = (short)2029;
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
