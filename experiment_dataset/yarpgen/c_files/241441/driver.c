#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)21845;
unsigned char var_9 = (unsigned char)207;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)24280;
unsigned long long int var_16 = 4641401179047459598ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)30979;
unsigned short var_19 = (unsigned short)39629;
void init() {
}

void checksum() {
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
