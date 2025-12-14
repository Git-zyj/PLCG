#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -496317934;
unsigned long long int var_4 = 10142136811279006116ULL;
long long int var_5 = 4450986086363682187LL;
int var_8 = -1411499448;
long long int var_10 = -8523617817842124344LL;
long long int var_11 = 7920834443274601690LL;
int zero = 0;
short var_12 = (short)-27289;
int var_13 = 73623002;
unsigned int var_14 = 1323298936U;
void init() {
}

void checksum() {
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
