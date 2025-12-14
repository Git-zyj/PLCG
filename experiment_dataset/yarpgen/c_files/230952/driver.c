#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9385;
unsigned int var_5 = 2646572663U;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-16479;
int zero = 0;
signed char var_11 = (signed char)-56;
unsigned int var_12 = 2972548749U;
int var_13 = -2039529392;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3476438388U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
