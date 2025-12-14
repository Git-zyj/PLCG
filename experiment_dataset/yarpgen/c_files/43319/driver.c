#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48238;
short var_2 = (short)3049;
short var_4 = (short)-13387;
signed char var_5 = (signed char)64;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 372381752885077186ULL;
signed char var_14 = (signed char)-88;
int zero = 0;
int var_15 = 127656648;
unsigned short var_16 = (unsigned short)21091;
int var_17 = -1945573398;
void init() {
}

void checksum() {
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
