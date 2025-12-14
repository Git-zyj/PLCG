#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)16342;
short var_7 = (short)21032;
long long int var_8 = 5221144857504392043LL;
long long int var_10 = -6766744269765582974LL;
int zero = 0;
unsigned short var_12 = (unsigned short)18791;
unsigned short var_13 = (unsigned short)9073;
unsigned short var_14 = (unsigned short)25631;
long long int var_15 = -686147356668299899LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
