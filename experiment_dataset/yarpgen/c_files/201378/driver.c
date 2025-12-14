#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-89;
unsigned short var_6 = (unsigned short)31006;
unsigned short var_13 = (unsigned short)14225;
int zero = 0;
short var_16 = (short)-13488;
unsigned int var_17 = 1875592578U;
unsigned long long int var_18 = 9538633011408918804ULL;
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
