#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)52227;
signed char var_11 = (signed char)59;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)44166;
int zero = 0;
signed char var_18 = (signed char)-73;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)64939;
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
