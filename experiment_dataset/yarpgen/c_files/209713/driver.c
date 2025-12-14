#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8285752882152466969LL;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_6 = -1771089907;
signed char var_8 = (signed char)18;
int var_10 = 194279441;
int zero = 0;
unsigned char var_11 = (unsigned char)110;
unsigned int var_12 = 2664760490U;
int var_13 = -1284421123;
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
