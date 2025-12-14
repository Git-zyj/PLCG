#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
signed char var_3 = (signed char)-47;
unsigned char var_4 = (unsigned char)77;
unsigned char var_5 = (unsigned char)159;
signed char var_6 = (signed char)-73;
unsigned long long int var_8 = 12163865428947620641ULL;
unsigned long long int var_10 = 7268297499960797765ULL;
int zero = 0;
signed char var_11 = (signed char)54;
unsigned long long int var_12 = 13225582320429813558ULL;
unsigned long long int var_13 = 17472765158496179615ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
