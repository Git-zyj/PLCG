#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31487;
long long int var_7 = -5742864123255713343LL;
signed char var_10 = (signed char)96;
unsigned short var_14 = (unsigned short)19905;
signed char var_16 = (signed char)-24;
unsigned int var_17 = 3642590080U;
int zero = 0;
short var_18 = (short)-32109;
unsigned short var_19 = (unsigned short)744;
short var_20 = (short)6618;
unsigned short var_21 = (unsigned short)1023;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
