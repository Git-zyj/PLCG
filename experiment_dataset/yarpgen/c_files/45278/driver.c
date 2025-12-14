#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_5 = 9472127355997823262ULL;
_Bool var_6 = (_Bool)0;
int var_7 = -919945237;
unsigned long long int var_8 = 12763478143797550501ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 15603632713130219223ULL;
short var_14 = (short)7518;
unsigned char var_15 = (unsigned char)180;
unsigned int var_16 = 1733250405U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
