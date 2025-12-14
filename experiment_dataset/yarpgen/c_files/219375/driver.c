#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4392168605118112844ULL;
unsigned int var_5 = 2070296273U;
signed char var_6 = (signed char)-82;
signed char var_9 = (signed char)-122;
int zero = 0;
signed char var_17 = (signed char)43;
unsigned int var_18 = 3508120121U;
void init() {
}

void checksum() {
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
