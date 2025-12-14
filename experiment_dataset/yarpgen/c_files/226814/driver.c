#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28155;
short var_2 = (short)-28315;
unsigned char var_4 = (unsigned char)142;
unsigned long long int var_5 = 5909897028507068220ULL;
short var_10 = (short)-26234;
signed char var_11 = (signed char)-42;
short var_12 = (short)-9172;
short var_17 = (short)-13300;
unsigned short var_19 = (unsigned short)41352;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-19630;
unsigned char var_22 = (unsigned char)122;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
