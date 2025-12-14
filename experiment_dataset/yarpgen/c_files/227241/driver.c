#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)93;
int var_13 = -279756593;
int zero = 0;
unsigned long long int var_17 = 15791124881215984935ULL;
unsigned char var_18 = (unsigned char)29;
signed char var_19 = (signed char)-99;
signed char var_20 = (signed char)31;
int var_21 = 689307993;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
