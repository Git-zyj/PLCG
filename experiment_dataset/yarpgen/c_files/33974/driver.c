#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 995190236U;
unsigned char var_4 = (unsigned char)45;
short var_8 = (short)31742;
int zero = 0;
short var_11 = (short)-11916;
unsigned char var_12 = (unsigned char)156;
signed char var_13 = (signed char)29;
void init() {
}

void checksum() {
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
