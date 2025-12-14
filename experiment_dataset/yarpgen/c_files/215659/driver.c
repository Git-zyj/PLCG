#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)22086;
long long int var_6 = -2550460122869942252LL;
short var_8 = (short)-29853;
signed char var_9 = (signed char)106;
unsigned short var_11 = (unsigned short)25028;
int zero = 0;
signed char var_13 = (signed char)95;
short var_14 = (short)4341;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
