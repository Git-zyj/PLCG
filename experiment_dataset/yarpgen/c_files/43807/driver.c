#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)87;
long long int var_3 = -9174158847653172243LL;
unsigned long long int var_8 = 10629295408781272320ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_14 = 17986750219760441057ULL;
int var_16 = 727627433;
int zero = 0;
short var_19 = (short)-18150;
signed char var_20 = (signed char)119;
unsigned int var_21 = 3923387338U;
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
