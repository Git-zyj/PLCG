#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
unsigned short var_2 = (unsigned short)34231;
signed char var_3 = (signed char)17;
int var_4 = -2086699298;
int var_7 = 1166266293;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 4806830395625427972ULL;
int zero = 0;
signed char var_14 = (signed char)-7;
unsigned long long int var_15 = 12801594933110080180ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
