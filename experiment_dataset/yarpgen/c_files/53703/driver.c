#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64328;
unsigned short var_5 = (unsigned short)23529;
unsigned short var_8 = (unsigned short)51551;
unsigned int var_9 = 4192107252U;
int zero = 0;
signed char var_11 = (signed char)43;
unsigned int var_12 = 1180293861U;
unsigned char var_13 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
