#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -1486336666;
long long int var_12 = 2022729237339292150LL;
signed char var_14 = (signed char)104;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
signed char var_16 = (signed char)-118;
signed char var_17 = (signed char)23;
unsigned int var_18 = 2984154620U;
unsigned short var_19 = (unsigned short)13360;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
