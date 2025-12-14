#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1501222093;
unsigned char var_1 = (unsigned char)115;
int var_2 = -1076716677;
unsigned int var_3 = 362859502U;
unsigned long long int var_4 = 5251358190746216741ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)5;
long long int var_11 = 9043399832267832297LL;
int zero = 0;
signed char var_12 = (signed char)-14;
signed char var_13 = (signed char)-68;
unsigned char var_14 = (unsigned char)83;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
