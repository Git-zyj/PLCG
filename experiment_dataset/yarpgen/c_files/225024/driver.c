#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-4;
unsigned char var_5 = (unsigned char)47;
int var_6 = 1498228770;
unsigned char var_7 = (unsigned char)11;
long long int var_8 = -6449979549842614105LL;
int var_11 = -600131941;
int zero = 0;
unsigned short var_15 = (unsigned short)48261;
long long int var_16 = -7642902791609126842LL;
signed char var_17 = (signed char)-12;
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
