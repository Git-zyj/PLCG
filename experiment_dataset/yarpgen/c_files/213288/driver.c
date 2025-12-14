#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19649;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)59437;
signed char var_10 = (signed char)28;
int zero = 0;
int var_11 = -1054479417;
unsigned long long int var_12 = 14319486773332469954ULL;
long long int var_13 = -5906299800450464817LL;
signed char var_14 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
