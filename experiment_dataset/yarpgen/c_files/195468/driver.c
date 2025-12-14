#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
signed char var_5 = (signed char)-81;
unsigned char var_6 = (unsigned char)213;
signed char var_8 = (signed char)-59;
signed char var_10 = (signed char)118;
signed char var_11 = (signed char)-126;
signed char var_12 = (signed char)-64;
int zero = 0;
signed char var_14 = (signed char)-56;
unsigned char var_15 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
