#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64347;
int var_3 = 1618236339;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)208;
int zero = 0;
unsigned char var_20 = (unsigned char)83;
int var_21 = -1782402746;
short var_22 = (short)8479;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
