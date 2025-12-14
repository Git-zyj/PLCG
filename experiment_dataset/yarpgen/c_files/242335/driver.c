#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned int var_6 = 4189021237U;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 1243612287U;
int zero = 0;
signed char var_20 = (signed char)-18;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)51;
unsigned short var_23 = (unsigned short)41469;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
