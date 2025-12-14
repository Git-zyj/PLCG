#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26229;
short var_4 = (short)21745;
unsigned int var_7 = 1730004564U;
unsigned char var_9 = (unsigned char)91;
signed char var_12 = (signed char)-47;
int zero = 0;
int var_13 = 319983023;
unsigned long long int var_14 = 15953362664680562644ULL;
void init() {
}

void checksum() {
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
