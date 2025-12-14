#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1799200711U;
short var_16 = (short)-3538;
int zero = 0;
unsigned short var_19 = (unsigned short)25939;
unsigned long long int var_20 = 16991109640005551160ULL;
unsigned int var_21 = 3865699362U;
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
