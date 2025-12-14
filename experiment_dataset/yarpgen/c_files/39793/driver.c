#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
signed char var_2 = (signed char)-24;
long long int var_4 = -130044931793571240LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)167;
long long int var_8 = 3191671873710092313LL;
signed char var_9 = (signed char)4;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-19977;
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
