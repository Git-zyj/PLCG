#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1726240641720675824ULL;
short var_8 = (short)-12590;
int var_14 = 688298759;
int zero = 0;
signed char var_16 = (signed char)-47;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)38214;
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
