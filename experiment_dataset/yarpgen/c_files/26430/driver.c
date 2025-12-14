#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1585095204211056553LL;
unsigned long long int var_5 = 4108130392283421713ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_17 = 10658674353668964245ULL;
unsigned char var_18 = (unsigned char)207;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)32587;
unsigned short var_22 = (unsigned short)62469;
short var_23 = (short)11472;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
