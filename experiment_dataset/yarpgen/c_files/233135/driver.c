#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48160;
signed char var_2 = (signed char)103;
short var_4 = (short)-7844;
unsigned long long int var_5 = 8120366223812558194ULL;
unsigned long long int var_7 = 7209853761716299027ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)49933;
unsigned short var_16 = (unsigned short)19538;
unsigned char var_18 = (unsigned char)136;
int zero = 0;
int var_19 = -1284312574;
unsigned int var_20 = 2281045449U;
short var_21 = (short)28880;
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
