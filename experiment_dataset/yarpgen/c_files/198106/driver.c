#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
signed char var_2 = (signed char)-78;
unsigned short var_4 = (unsigned short)29352;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)59029;
unsigned short var_11 = (unsigned short)61854;
unsigned int var_12 = 1370235102U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
