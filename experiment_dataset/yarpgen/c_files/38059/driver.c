#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
int var_3 = -1259566148;
unsigned long long int var_6 = 11279396907180834982ULL;
unsigned int var_11 = 366010635U;
int var_13 = 1277607399;
int zero = 0;
unsigned short var_17 = (unsigned short)48839;
short var_18 = (short)-19056;
void init() {
}

void checksum() {
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
