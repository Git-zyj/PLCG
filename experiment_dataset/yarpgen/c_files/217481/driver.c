#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)17019;
short var_5 = (short)-14910;
signed char var_6 = (signed char)-101;
int zero = 0;
unsigned long long int var_20 = 18318874171898280411ULL;
int var_21 = -661428081;
int var_22 = 1218251427;
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
