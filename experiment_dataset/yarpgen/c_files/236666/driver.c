#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)36;
signed char var_6 = (signed char)95;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)33;
int zero = 0;
unsigned char var_18 = (unsigned char)128;
_Bool var_19 = (_Bool)0;
short var_20 = (short)5104;
long long int var_21 = -44814411076791416LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
