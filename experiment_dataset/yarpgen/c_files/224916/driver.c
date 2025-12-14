#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 16229632288608731567ULL;
short var_14 = (short)10555;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2244266931524804268ULL;
int zero = 0;
short var_20 = (short)-15132;
short var_21 = (short)-6524;
void init() {
}

void checksum() {
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
