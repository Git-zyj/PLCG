#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-5116;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)237;
int zero = 0;
short var_12 = (short)-21471;
unsigned int var_13 = 954897273U;
long long int var_14 = -4561376608359289167LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
