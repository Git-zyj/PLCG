#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
short var_4 = (short)17785;
signed char var_8 = (signed char)-11;
unsigned int var_10 = 1707056571U;
int zero = 0;
unsigned int var_12 = 157582884U;
unsigned short var_13 = (unsigned short)6843;
void init() {
}

void checksum() {
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
