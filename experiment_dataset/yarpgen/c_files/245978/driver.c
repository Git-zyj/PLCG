#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18913;
_Bool var_4 = (_Bool)1;
short var_9 = (short)22369;
signed char var_10 = (signed char)21;
int var_11 = 173781873;
unsigned int var_12 = 874515263U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)30235;
short var_18 = (short)6894;
int zero = 0;
unsigned short var_20 = (unsigned short)36611;
long long int var_21 = -5081307644759818649LL;
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
