#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3982616492U;
unsigned int var_2 = 2882282547U;
unsigned short var_3 = (unsigned short)17467;
unsigned char var_7 = (unsigned char)204;
signed char var_8 = (signed char)-20;
int zero = 0;
unsigned short var_12 = (unsigned short)3761;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2231224309U;
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
