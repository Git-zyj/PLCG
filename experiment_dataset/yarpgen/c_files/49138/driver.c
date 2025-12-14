#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)135;
short var_4 = (short)5391;
unsigned char var_9 = (unsigned char)84;
short var_10 = (short)9565;
short var_11 = (short)27231;
unsigned char var_12 = (unsigned char)102;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)96;
int zero = 0;
unsigned char var_17 = (unsigned char)193;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
