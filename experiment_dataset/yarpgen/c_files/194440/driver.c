#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1875358280U;
int var_9 = 367544810;
unsigned char var_13 = (unsigned char)9;
int zero = 0;
signed char var_18 = (signed char)-11;
unsigned short var_19 = (unsigned short)17223;
unsigned int var_20 = 4119941312U;
void init() {
}

void checksum() {
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
