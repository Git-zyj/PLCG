#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24977;
signed char var_3 = (signed char)77;
long long int var_4 = 7915524438874006461LL;
unsigned int var_7 = 2321466482U;
short var_11 = (short)8992;
int zero = 0;
signed char var_12 = (signed char)-98;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)38;
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
