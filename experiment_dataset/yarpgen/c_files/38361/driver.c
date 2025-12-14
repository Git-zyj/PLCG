#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3945256151U;
long long int var_4 = 248760866489887875LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)18370;
int zero = 0;
unsigned char var_11 = (unsigned char)215;
short var_12 = (short)27230;
short var_13 = (short)22861;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
