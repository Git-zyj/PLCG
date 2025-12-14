#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2006230242U;
signed char var_10 = (signed char)-71;
int zero = 0;
unsigned long long int var_17 = 10420694555087166911ULL;
short var_18 = (short)9297;
unsigned short var_19 = (unsigned short)32444;
signed char var_20 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
