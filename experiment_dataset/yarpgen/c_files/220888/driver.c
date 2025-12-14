#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5070;
long long int var_10 = -7413769112591458190LL;
unsigned int var_14 = 665885126U;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)-3297;
long long int var_21 = 6338473145813558151LL;
unsigned char var_22 = (unsigned char)15;
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
