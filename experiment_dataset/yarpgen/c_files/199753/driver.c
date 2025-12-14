#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25116;
short var_2 = (short)-24134;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)55880;
unsigned short var_5 = (unsigned short)65075;
unsigned long long int var_6 = 10259546366500751575ULL;
unsigned int var_7 = 3724211172U;
long long int var_9 = 2055720402810847459LL;
int zero = 0;
unsigned char var_11 = (unsigned char)157;
short var_12 = (short)25997;
short var_13 = (short)-8569;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
