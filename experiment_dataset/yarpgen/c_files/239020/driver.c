#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1631791930U;
unsigned short var_1 = (unsigned short)46362;
unsigned int var_4 = 309429536U;
unsigned int var_5 = 3229544291U;
unsigned int var_7 = 1136773296U;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-59;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)116;
unsigned char var_12 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
