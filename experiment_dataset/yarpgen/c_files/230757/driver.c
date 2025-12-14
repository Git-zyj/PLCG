#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 748531286U;
unsigned short var_5 = (unsigned short)6363;
unsigned short var_6 = (unsigned short)40860;
signed char var_9 = (signed char)-43;
unsigned long long int var_10 = 2394975956931838998ULL;
signed char var_14 = (signed char)77;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-127;
signed char var_17 = (signed char)114;
long long int var_18 = -1990106758242920795LL;
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
