#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-55;
unsigned short var_8 = (unsigned short)2533;
unsigned short var_11 = (unsigned short)34885;
unsigned long long int var_12 = 2063643194279540640ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)24;
short var_15 = (short)13899;
void init() {
}

void checksum() {
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
