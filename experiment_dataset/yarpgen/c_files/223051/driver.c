#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6176182668645300594LL;
_Bool var_3 = (_Bool)1;
unsigned int var_8 = 512274683U;
int zero = 0;
unsigned short var_12 = (unsigned short)21353;
short var_13 = (short)15640;
long long int var_14 = -2144970167236836563LL;
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
