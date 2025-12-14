#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1037;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)50819;
long long int var_6 = -1427319315813170718LL;
long long int var_7 = -986973821314701555LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -6330319281357016187LL;
unsigned short var_10 = (unsigned short)32122;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)4179;
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
