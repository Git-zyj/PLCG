#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2084216359;
unsigned char var_6 = (unsigned char)29;
short var_17 = (short)26902;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)86;
signed char var_22 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
