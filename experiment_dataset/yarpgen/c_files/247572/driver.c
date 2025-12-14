#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32618;
unsigned short var_1 = (unsigned short)57952;
unsigned char var_3 = (unsigned char)70;
signed char var_4 = (signed char)42;
int var_5 = -292332885;
unsigned char var_7 = (unsigned char)58;
unsigned int var_8 = 2308025584U;
unsigned int var_10 = 3373592053U;
int zero = 0;
unsigned short var_12 = (unsigned short)43317;
signed char var_13 = (signed char)52;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
