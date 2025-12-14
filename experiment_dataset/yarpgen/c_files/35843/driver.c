#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_9 = (unsigned short)37634;
_Bool var_12 = (_Bool)1;
unsigned char var_17 = (unsigned char)107;
int zero = 0;
short var_19 = (short)13164;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)221;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
