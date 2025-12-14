#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 714953526578264087LL;
signed char var_2 = (signed char)-86;
unsigned char var_4 = (unsigned char)185;
long long int var_5 = 2777400091473713806LL;
unsigned int var_7 = 3756307140U;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-52;
long long int var_11 = 8719321059237833590LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int var_14 = 1497546089;
int var_15 = -4523986;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
