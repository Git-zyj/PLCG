#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 946469928212865612ULL;
unsigned int var_12 = 26843211U;
signed char var_13 = (signed char)70;
int zero = 0;
signed char var_16 = (signed char)-61;
short var_17 = (short)-10059;
unsigned long long int var_18 = 7920764364607069835ULL;
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
