#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -443606306;
signed char var_1 = (signed char)36;
unsigned char var_3 = (unsigned char)49;
int var_10 = 2121541731;
unsigned char var_11 = (unsigned char)59;
signed char var_13 = (signed char)-77;
int zero = 0;
unsigned char var_16 = (unsigned char)136;
int var_17 = -1083136909;
void init() {
}

void checksum() {
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
