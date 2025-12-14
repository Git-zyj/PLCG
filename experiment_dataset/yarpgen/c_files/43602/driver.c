#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
short var_2 = (short)-19437;
unsigned int var_3 = 3449721840U;
_Bool var_10 = (_Bool)1;
unsigned short var_15 = (unsigned short)14757;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -2209171882855407532LL;
unsigned int var_18 = 4004166960U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
