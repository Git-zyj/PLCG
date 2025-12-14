#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16366;
unsigned int var_4 = 1398626598U;
unsigned int var_13 = 1610464605U;
unsigned char var_15 = (unsigned char)84;
int zero = 0;
unsigned char var_19 = (unsigned char)245;
unsigned int var_20 = 4291679403U;
signed char var_21 = (signed char)-20;
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
