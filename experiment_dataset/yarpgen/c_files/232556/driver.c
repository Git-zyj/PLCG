#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62089;
long long int var_1 = 4281734950170612133LL;
unsigned short var_3 = (unsigned short)56911;
unsigned char var_4 = (unsigned char)163;
unsigned int var_5 = 2662301250U;
short var_7 = (short)16349;
unsigned int var_8 = 1399457809U;
int zero = 0;
short var_11 = (short)-32001;
unsigned short var_12 = (unsigned short)37768;
signed char var_13 = (signed char)-42;
unsigned short var_14 = (unsigned short)41309;
unsigned char var_15 = (unsigned char)48;
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
