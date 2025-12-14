#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43325;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
int var_9 = 1097882493;
unsigned int var_10 = 756271323U;
unsigned char var_11 = (unsigned char)159;
signed char var_12 = (signed char)71;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
unsigned char var_20 = (unsigned char)168;
unsigned int var_21 = 3044943495U;
unsigned int var_22 = 3946850865U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
