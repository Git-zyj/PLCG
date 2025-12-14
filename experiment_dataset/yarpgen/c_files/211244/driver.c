#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)95;
unsigned short var_5 = (unsigned short)14750;
signed char var_12 = (signed char)14;
int zero = 0;
signed char var_19 = (signed char)15;
unsigned short var_20 = (unsigned short)11579;
signed char var_21 = (signed char)-105;
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
