#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55841;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)76;
unsigned char var_8 = (unsigned char)171;
int zero = 0;
unsigned short var_10 = (unsigned short)59862;
unsigned char var_11 = (unsigned char)54;
signed char var_12 = (signed char)-103;
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
