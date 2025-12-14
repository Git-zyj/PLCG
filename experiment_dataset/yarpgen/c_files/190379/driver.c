#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3197197996U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)46;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)206;
unsigned int var_7 = 2079475337U;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2003243172U;
unsigned char var_12 = (unsigned char)184;
int var_13 = 322756620;
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
