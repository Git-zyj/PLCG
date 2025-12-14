#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 5304431981725018100ULL;
unsigned char var_6 = (unsigned char)173;
unsigned long long int var_9 = 5692219377300832538ULL;
short var_10 = (short)21418;
int zero = 0;
int var_19 = -1626310939;
short var_20 = (short)26917;
unsigned int var_21 = 609052569U;
void init() {
}

void checksum() {
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
