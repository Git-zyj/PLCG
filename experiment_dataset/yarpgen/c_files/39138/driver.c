#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11839243671237972266ULL;
short var_4 = (short)20948;
unsigned int var_6 = 415214975U;
unsigned long long int var_7 = 10352874565039470084ULL;
signed char var_9 = (signed char)-125;
unsigned char var_10 = (unsigned char)15;
int var_12 = 1936329543;
unsigned long long int var_14 = 4349950917494991933ULL;
int zero = 0;
short var_16 = (short)29114;
short var_17 = (short)3603;
short var_18 = (short)-32419;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
