#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5526641811925942124LL;
unsigned int var_6 = 1921913259U;
int var_10 = 96993549;
short var_11 = (short)31084;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4691452214682263131LL;
short var_14 = (short)27229;
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
