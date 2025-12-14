#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned short var_1 = (unsigned short)49740;
unsigned short var_3 = (unsigned short)4658;
signed char var_6 = (signed char)46;
unsigned short var_7 = (unsigned short)24321;
signed char var_10 = (signed char)58;
int zero = 0;
unsigned short var_11 = (unsigned short)22430;
unsigned short var_12 = (unsigned short)64786;
unsigned short var_13 = (unsigned short)45243;
signed char var_14 = (signed char)9;
unsigned short var_15 = (unsigned short)45598;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
