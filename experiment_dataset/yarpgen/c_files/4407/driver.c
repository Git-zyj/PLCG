#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13408;
int var_2 = 48853989;
signed char var_4 = (signed char)-69;
unsigned int var_11 = 3216155066U;
unsigned int var_14 = 3822329052U;
int zero = 0;
short var_16 = (short)27153;
short var_17 = (short)2429;
signed char var_18 = (signed char)-24;
void init() {
}

void checksum() {
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
