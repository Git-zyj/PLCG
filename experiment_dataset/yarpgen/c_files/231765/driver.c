#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7772740194355605253LL;
unsigned int var_1 = 3374744640U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)80;
unsigned int var_7 = 3144832853U;
int zero = 0;
int var_11 = 9307205;
unsigned int var_12 = 3174184464U;
void init() {
}

void checksum() {
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
