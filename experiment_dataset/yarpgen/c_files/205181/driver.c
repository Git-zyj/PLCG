#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)228;
unsigned char var_9 = (unsigned char)172;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)46402;
unsigned long long int var_13 = 6524533418383312512ULL;
int zero = 0;
short var_14 = (short)27299;
int var_15 = 7792168;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
