#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-60;
signed char var_4 = (signed char)-73;
unsigned int var_7 = 1559873865U;
signed char var_8 = (signed char)121;
int zero = 0;
short var_14 = (short)-16395;
short var_15 = (short)31910;
signed char var_16 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
