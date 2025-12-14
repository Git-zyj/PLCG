#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21;
long long int var_3 = -4669018446967635520LL;
unsigned char var_5 = (unsigned char)168;
signed char var_8 = (signed char)-123;
signed char var_9 = (signed char)102;
unsigned long long int var_10 = 15793427943906699481ULL;
unsigned short var_12 = (unsigned short)6710;
unsigned long long int var_13 = 9152304708286733748ULL;
unsigned long long int var_14 = 13117784728451591441ULL;
unsigned long long int var_15 = 1933261512062883343ULL;
signed char var_17 = (signed char)126;
int zero = 0;
unsigned char var_19 = (unsigned char)38;
long long int var_20 = 6073535016793434097LL;
unsigned char var_21 = (unsigned char)151;
unsigned char var_22 = (unsigned char)86;
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
