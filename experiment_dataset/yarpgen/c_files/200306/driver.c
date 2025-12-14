#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1778986499;
unsigned short var_2 = (unsigned short)21554;
int var_5 = 991969837;
unsigned char var_6 = (unsigned char)4;
long long int var_9 = -9202093995045819217LL;
int zero = 0;
int var_10 = -1887563610;
long long int var_11 = 4493389562800805855LL;
unsigned short var_12 = (unsigned short)56185;
unsigned int var_13 = 466940866U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
