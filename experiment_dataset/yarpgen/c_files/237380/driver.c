#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)144;
signed char var_3 = (signed char)-118;
unsigned long long int var_4 = 6164598970491259016ULL;
unsigned short var_6 = (unsigned short)46880;
_Bool var_8 = (_Bool)1;
int var_9 = 823751373;
int zero = 0;
int var_10 = -998142444;
signed char var_11 = (signed char)-104;
short var_12 = (short)-2271;
unsigned int var_13 = 2828309611U;
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
