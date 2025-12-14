#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2599170129U;
signed char var_4 = (signed char)-18;
unsigned int var_10 = 269293040U;
unsigned short var_11 = (unsigned short)45449;
unsigned char var_12 = (unsigned char)228;
int zero = 0;
unsigned short var_13 = (unsigned short)6759;
int var_14 = -2190240;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
