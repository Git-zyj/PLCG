#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6943;
unsigned char var_4 = (unsigned char)85;
short var_5 = (short)14392;
unsigned short var_10 = (unsigned short)43648;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13464165478212883721ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-5839;
long long int var_16 = -2470783415249425251LL;
int var_17 = -748236819;
unsigned char var_18 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
