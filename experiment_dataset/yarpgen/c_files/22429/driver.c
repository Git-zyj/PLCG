#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4196311216U;
unsigned int var_2 = 368992961U;
unsigned char var_3 = (unsigned char)182;
int var_4 = 875620091;
unsigned short var_5 = (unsigned short)21180;
short var_8 = (short)-18962;
short var_15 = (short)-29845;
int zero = 0;
short var_16 = (short)-19511;
long long int var_17 = -8583447916431352705LL;
unsigned long long int var_18 = 9016434257175249115ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3776661145U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
