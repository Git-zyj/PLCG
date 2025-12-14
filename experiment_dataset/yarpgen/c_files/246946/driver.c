#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3550907455648782003ULL;
unsigned short var_2 = (unsigned short)31600;
unsigned short var_3 = (unsigned short)55804;
signed char var_4 = (signed char)-109;
_Bool var_10 = (_Bool)1;
int var_11 = 1269297151;
int zero = 0;
signed char var_12 = (signed char)114;
unsigned short var_13 = (unsigned short)57642;
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
