#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1316950170;
signed char var_3 = (signed char)52;
unsigned short var_14 = (unsigned short)9058;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 36840122957916020ULL;
unsigned int var_19 = 3989714235U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
