#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12672;
signed char var_3 = (signed char)-59;
unsigned short var_5 = (unsigned short)28253;
unsigned int var_6 = 3033621058U;
unsigned short var_7 = (unsigned short)21290;
int zero = 0;
unsigned char var_12 = (unsigned char)85;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
