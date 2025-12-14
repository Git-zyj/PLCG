#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)40153;
long long int var_7 = -2259110292424554501LL;
signed char var_13 = (signed char)86;
int zero = 0;
int var_16 = 1501303576;
unsigned char var_17 = (unsigned char)114;
unsigned short var_18 = (unsigned short)41812;
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
