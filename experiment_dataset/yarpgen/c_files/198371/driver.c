#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6448351075983948635ULL;
short var_6 = (short)10223;
unsigned char var_7 = (unsigned char)214;
signed char var_11 = (signed char)10;
int zero = 0;
unsigned int var_12 = 1664807571U;
signed char var_13 = (signed char)-121;
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
