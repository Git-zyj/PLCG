#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30394;
short var_1 = (short)-19288;
short var_2 = (short)-6265;
short var_7 = (short)-16123;
short var_10 = (short)-9163;
int zero = 0;
short var_11 = (short)-11618;
short var_12 = (short)-21521;
short var_13 = (short)-12753;
short var_14 = (short)-20107;
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
