#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
int var_2 = 1223983718;
unsigned int var_9 = 2809259809U;
int var_10 = 1099056778;
int zero = 0;
unsigned long long int var_14 = 9637691533859076332ULL;
unsigned int var_15 = 1385495465U;
unsigned int var_16 = 924684992U;
unsigned long long int var_17 = 7357004522019897282ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
