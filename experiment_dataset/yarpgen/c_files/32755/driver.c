#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2260746042U;
unsigned long long int var_2 = 4025886212572701671ULL;
unsigned char var_3 = (unsigned char)226;
unsigned short var_4 = (unsigned short)48836;
long long int var_6 = -5253582869953116160LL;
short var_7 = (short)32377;
signed char var_8 = (signed char)-83;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1692057736;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
