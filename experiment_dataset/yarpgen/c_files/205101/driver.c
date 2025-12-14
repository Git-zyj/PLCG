#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)186;
unsigned char var_11 = (unsigned char)24;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-15;
signed char var_18 = (signed char)56;
int var_19 = -767172764;
signed char var_20 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
