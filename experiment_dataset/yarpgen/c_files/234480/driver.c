#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_7 = (unsigned char)56;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)9253;
int zero = 0;
unsigned short var_17 = (unsigned short)15630;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)31070;
unsigned short var_20 = (unsigned short)34880;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
