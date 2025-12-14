#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
unsigned short var_2 = (unsigned short)39590;
unsigned short var_4 = (unsigned short)57576;
unsigned char var_5 = (unsigned char)127;
unsigned short var_7 = (unsigned short)10386;
unsigned short var_10 = (unsigned short)34855;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)16;
void init() {
}

void checksum() {
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
