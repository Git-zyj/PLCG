#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1764382981;
unsigned long long int var_10 = 13291242141009490645ULL;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-22809;
unsigned long long int var_15 = 15979255155099356013ULL;
int var_16 = -2079843098;
long long int var_18 = -1992495528067932019LL;
int zero = 0;
unsigned int var_19 = 2773390913U;
int var_20 = -725901215;
unsigned short var_21 = (unsigned short)30642;
unsigned short var_22 = (unsigned short)30359;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
