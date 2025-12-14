#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1070584684869840499LL;
signed char var_1 = (signed char)50;
unsigned long long int var_4 = 11326846505177411511ULL;
long long int var_5 = 1510620118466070891LL;
unsigned char var_7 = (unsigned char)184;
unsigned char var_8 = (unsigned char)49;
unsigned char var_9 = (unsigned char)207;
unsigned long long int var_10 = 2767422890921832620ULL;
int zero = 0;
short var_12 = (short)11027;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 182210698U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
