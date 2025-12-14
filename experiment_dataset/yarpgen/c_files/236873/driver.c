#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31839;
long long int var_2 = -8016720375935925432LL;
unsigned char var_4 = (unsigned char)134;
signed char var_5 = (signed char)-111;
signed char var_6 = (signed char)103;
unsigned int var_7 = 1881968926U;
unsigned short var_8 = (unsigned short)21884;
int zero = 0;
unsigned int var_10 = 2334880874U;
unsigned short var_11 = (unsigned short)57413;
int var_12 = -1967784271;
signed char var_13 = (signed char)77;
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
