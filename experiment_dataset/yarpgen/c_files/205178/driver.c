#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)15423;
unsigned short var_6 = (unsigned short)39267;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_12 = 6774841109789432414LL;
unsigned short var_13 = (unsigned short)4345;
void init() {
}

void checksum() {
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
