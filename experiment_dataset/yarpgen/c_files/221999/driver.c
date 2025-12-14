#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
_Bool var_2 = (_Bool)1;
int var_6 = -944387205;
signed char var_7 = (signed char)71;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 15995697202415650112ULL;
unsigned short var_16 = (unsigned short)20027;
unsigned int var_17 = 1009394673U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
