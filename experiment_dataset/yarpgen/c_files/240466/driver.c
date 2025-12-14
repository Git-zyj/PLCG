#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3653744511535980477LL;
unsigned short var_10 = (unsigned short)60169;
unsigned int var_11 = 3937762488U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)19585;
int zero = 0;
unsigned short var_18 = (unsigned short)12469;
short var_19 = (short)-234;
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
