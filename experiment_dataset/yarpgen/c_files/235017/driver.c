#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)35429;
unsigned long long int var_6 = 9254067897514479527ULL;
unsigned short var_8 = (unsigned short)41345;
int zero = 0;
unsigned short var_13 = (unsigned short)56310;
unsigned long long int var_14 = 16928037058338402110ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3869105907U;
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
