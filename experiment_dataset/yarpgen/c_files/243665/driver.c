#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21786;
signed char var_6 = (signed char)-87;
unsigned int var_7 = 1320233908U;
unsigned int var_10 = 995986148U;
unsigned short var_11 = (unsigned short)21443;
int zero = 0;
unsigned int var_12 = 383401675U;
unsigned short var_13 = (unsigned short)25905;
short var_14 = (short)3329;
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
