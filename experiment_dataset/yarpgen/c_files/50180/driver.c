#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17584755028807172742ULL;
unsigned long long int var_8 = 3592163942288170022ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-13023;
unsigned char var_15 = (unsigned char)25;
short var_16 = (short)5668;
signed char var_17 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
