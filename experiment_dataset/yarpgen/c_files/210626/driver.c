#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16795;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)161;
signed char var_13 = (signed char)-26;
int zero = 0;
signed char var_19 = (signed char)99;
int var_20 = 1300619866;
signed char var_21 = (signed char)123;
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
