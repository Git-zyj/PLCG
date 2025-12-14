#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_19 = 5850195254551113611ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
int var_22 = 929523161;
long long int var_23 = 8059706252045974626LL;
short var_24 = (short)18714;
unsigned char var_25 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
