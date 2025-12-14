#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7075027962167292392LL;
unsigned short var_5 = (unsigned short)54233;
unsigned short var_12 = (unsigned short)4609;
int zero = 0;
unsigned char var_13 = (unsigned char)65;
int var_14 = 137268745;
unsigned long long int var_15 = 5652157239489778002ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
