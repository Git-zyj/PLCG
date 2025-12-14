#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19658;
unsigned char var_5 = (unsigned char)108;
short var_7 = (short)-30047;
unsigned long long int var_13 = 9920732786922518089ULL;
signed char var_15 = (signed char)94;
short var_16 = (short)-27234;
short var_17 = (short)20607;
int zero = 0;
unsigned short var_19 = (unsigned short)22247;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)15575;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
