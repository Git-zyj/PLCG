#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3631923352U;
unsigned int var_8 = 529762261U;
unsigned int var_10 = 2619394613U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 1358374680417365444ULL;
unsigned short var_19 = (unsigned short)4632;
short var_20 = (short)-2089;
void init() {
}

void checksum() {
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
