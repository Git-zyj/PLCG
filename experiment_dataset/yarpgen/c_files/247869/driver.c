#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-12974;
short var_11 = (short)-24622;
short var_14 = (short)-27564;
unsigned short var_15 = (unsigned short)25353;
unsigned int var_16 = 1023765420U;
int zero = 0;
unsigned int var_18 = 3775212576U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
