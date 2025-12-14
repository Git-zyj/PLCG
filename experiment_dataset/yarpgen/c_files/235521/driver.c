#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4767;
long long int var_4 = -6826047877858079121LL;
signed char var_12 = (signed char)11;
long long int var_13 = -1222329767323911279LL;
int zero = 0;
unsigned int var_18 = 1268987005U;
long long int var_19 = 3496028843428517275LL;
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
