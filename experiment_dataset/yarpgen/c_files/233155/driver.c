#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20701;
signed char var_6 = (signed char)-63;
signed char var_8 = (signed char)62;
unsigned short var_13 = (unsigned short)51132;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
unsigned int var_15 = 2533673891U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 14756680699950085861ULL;
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
