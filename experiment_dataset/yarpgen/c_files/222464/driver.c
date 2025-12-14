#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6081224572657589427LL;
unsigned short var_2 = (unsigned short)35604;
long long int var_3 = 4155200166630886712LL;
unsigned short var_8 = (unsigned short)29547;
signed char var_9 = (signed char)-100;
unsigned char var_11 = (unsigned char)160;
signed char var_14 = (signed char)-31;
int zero = 0;
unsigned long long int var_15 = 14238955817792225493ULL;
unsigned int var_16 = 3596067072U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
