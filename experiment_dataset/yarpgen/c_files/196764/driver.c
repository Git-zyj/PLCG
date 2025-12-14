#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7260072241541605426ULL;
_Bool var_2 = (_Bool)1;
int var_4 = -1496423502;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 7448806254594826767ULL;
unsigned long long int var_11 = 8976058921803168113ULL;
int zero = 0;
unsigned int var_13 = 3731254774U;
short var_14 = (short)18994;
unsigned char var_15 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
