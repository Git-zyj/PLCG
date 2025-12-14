#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 158038797U;
unsigned int var_2 = 2982909333U;
unsigned int var_7 = 710166284U;
unsigned int var_11 = 2941664322U;
unsigned int var_12 = 1290769378U;
unsigned int var_13 = 587288019U;
unsigned int var_16 = 3102421746U;
int zero = 0;
unsigned int var_19 = 3547228273U;
unsigned int var_20 = 2813154552U;
unsigned int var_21 = 1844832286U;
unsigned int var_22 = 3720755953U;
unsigned int var_23 = 1782043694U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
