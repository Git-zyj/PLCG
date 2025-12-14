#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1570;
int var_1 = 1156994360;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-950;
unsigned short var_6 = (unsigned short)38645;
unsigned short var_11 = (unsigned short)15029;
int zero = 0;
signed char var_13 = (signed char)110;
unsigned short var_14 = (unsigned short)63509;
unsigned short var_15 = (unsigned short)2632;
unsigned int var_16 = 1856823558U;
void init() {
}

void checksum() {
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
