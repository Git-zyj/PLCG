#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)73;
unsigned short var_6 = (unsigned short)61482;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_20 = 5964545865673917924LL;
short var_21 = (short)23061;
unsigned char var_22 = (unsigned char)121;
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
