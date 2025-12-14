#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5475;
signed char var_11 = (signed char)123;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)55;
int zero = 0;
unsigned char var_18 = (unsigned char)129;
signed char var_19 = (signed char)-114;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
