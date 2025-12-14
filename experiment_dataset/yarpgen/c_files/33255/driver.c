#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9816506041451758211ULL;
short var_3 = (short)8292;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_12 = 7445905211982830636LL;
unsigned long long int var_13 = 17490915712457501918ULL;
void init() {
}

void checksum() {
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
