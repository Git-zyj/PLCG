#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)245;
int var_3 = -2133946408;
signed char var_5 = (signed char)46;
unsigned short var_11 = (unsigned short)15548;
unsigned char var_14 = (unsigned char)248;
long long int var_19 = 6900297783482189146LL;
int zero = 0;
int var_20 = 318630777;
_Bool var_21 = (_Bool)1;
short var_22 = (short)22067;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
