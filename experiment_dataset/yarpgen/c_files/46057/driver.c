#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23880;
signed char var_1 = (signed char)41;
int var_2 = -1063948282;
unsigned long long int var_4 = 682899383605486379ULL;
signed char var_8 = (signed char)-11;
unsigned short var_11 = (unsigned short)30838;
unsigned int var_12 = 3972363183U;
int zero = 0;
unsigned long long int var_15 = 11066102398590236277ULL;
int var_16 = -1119308411;
unsigned long long int var_17 = 3277123477106813139ULL;
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
