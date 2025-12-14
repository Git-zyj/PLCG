#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 2039240878129003522ULL;
unsigned long long int var_8 = 12936571907483200143ULL;
unsigned int var_10 = 4072721632U;
signed char var_12 = (signed char)-83;
signed char var_14 = (signed char)45;
unsigned char var_17 = (unsigned char)32;
int zero = 0;
unsigned int var_19 = 4085312217U;
short var_20 = (short)16642;
void init() {
}

void checksum() {
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
