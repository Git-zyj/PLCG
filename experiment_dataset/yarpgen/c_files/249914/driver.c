#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)58;
unsigned short var_6 = (unsigned short)51806;
unsigned int var_14 = 1001653040U;
unsigned short var_15 = (unsigned short)13916;
short var_17 = (short)-11618;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)126;
int var_20 = 1640692645;
void init() {
}

void checksum() {
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
