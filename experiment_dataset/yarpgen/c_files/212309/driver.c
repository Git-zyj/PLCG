#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 436276790U;
unsigned long long int var_4 = 16294677480635861691ULL;
short var_11 = (short)-27900;
short var_13 = (short)12289;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -2825624521020925941LL;
short var_18 = (short)9537;
unsigned short var_19 = (unsigned short)62248;
unsigned short var_20 = (unsigned short)258;
unsigned int var_21 = 2927206237U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
