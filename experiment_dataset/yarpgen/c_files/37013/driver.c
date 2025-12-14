#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33029;
long long int var_8 = 9210633080564612328LL;
unsigned char var_10 = (unsigned char)198;
int zero = 0;
signed char var_18 = (signed char)-18;
signed char var_19 = (signed char)-44;
unsigned char var_20 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
