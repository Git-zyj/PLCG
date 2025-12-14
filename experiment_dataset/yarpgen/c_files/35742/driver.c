#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34502;
unsigned short var_3 = (unsigned short)52223;
unsigned short var_6 = (unsigned short)19930;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)22048;
void init() {
}

void checksum() {
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
