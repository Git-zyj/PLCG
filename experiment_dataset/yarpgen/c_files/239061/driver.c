#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2143704323700733901LL;
int var_4 = -254184870;
signed char var_6 = (signed char)-18;
unsigned char var_10 = (unsigned char)143;
int zero = 0;
short var_11 = (short)-18902;
unsigned long long int var_12 = 10989833021673424833ULL;
signed char var_13 = (signed char)126;
signed char var_14 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
