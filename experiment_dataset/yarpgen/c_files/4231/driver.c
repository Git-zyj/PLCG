#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2780223036U;
long long int var_1 = 4431366001461685971LL;
unsigned int var_4 = 2339456071U;
unsigned int var_5 = 1182706633U;
_Bool var_6 = (_Bool)0;
int zero = 0;
long long int var_10 = 462627643077427386LL;
unsigned char var_11 = (unsigned char)179;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15949434728062765297ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
