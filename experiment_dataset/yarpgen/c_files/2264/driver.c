#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63439;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)12342;
int zero = 0;
int var_17 = -1037509849;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
