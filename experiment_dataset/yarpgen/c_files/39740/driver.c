#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)41;
unsigned long long int var_3 = 5542910367286432817ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -8707303118656089665LL;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
short var_17 = (short)-6927;
_Bool var_18 = (_Bool)0;
int var_19 = -462202834;
unsigned int var_20 = 4116292717U;
int var_21 = 336763572;
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
