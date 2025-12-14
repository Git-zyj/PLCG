#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25302;
short var_4 = (short)28069;
unsigned long long int var_6 = 13412841054917140064ULL;
unsigned int var_7 = 3022473602U;
unsigned int var_16 = 2854844539U;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)97;
void init() {
}

void checksum() {
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
