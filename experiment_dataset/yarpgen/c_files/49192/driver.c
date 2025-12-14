#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18547;
unsigned long long int var_8 = 15405617745521174998ULL;
int zero = 0;
long long int var_11 = -6343020417001288155LL;
long long int var_12 = -7892082462261517138LL;
short var_13 = (short)11407;
unsigned short var_14 = (unsigned short)18584;
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
