#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8265352537058451516ULL;
unsigned int var_3 = 3059997473U;
signed char var_8 = (signed char)37;
short var_10 = (short)22802;
unsigned short var_13 = (unsigned short)1824;
unsigned int var_16 = 4159717871U;
int zero = 0;
signed char var_18 = (signed char)-1;
unsigned int var_19 = 1411583786U;
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
