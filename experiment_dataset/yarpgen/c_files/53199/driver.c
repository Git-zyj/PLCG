#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43696;
unsigned long long int var_4 = 10640191405533511982ULL;
_Bool var_5 = (_Bool)1;
int var_18 = 1940918761;
int zero = 0;
unsigned short var_19 = (unsigned short)59223;
unsigned int var_20 = 3784077524U;
signed char var_21 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
