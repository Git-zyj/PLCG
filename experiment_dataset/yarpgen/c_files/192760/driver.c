#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1802132471;
signed char var_2 = (signed char)12;
signed char var_3 = (signed char)117;
_Bool var_4 = (_Bool)1;
int var_8 = 1738186153;
int var_11 = -1456267249;
signed char var_12 = (signed char)-46;
int zero = 0;
signed char var_15 = (signed char)2;
signed char var_16 = (signed char)41;
int var_17 = 1207821798;
signed char var_18 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
