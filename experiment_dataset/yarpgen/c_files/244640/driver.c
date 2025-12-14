#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
signed char var_4 = (signed char)58;
int var_5 = 2025744604;
int var_6 = -1734063313;
signed char var_7 = (signed char)-19;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)54181;
int zero = 0;
short var_12 = (short)-14554;
unsigned short var_13 = (unsigned short)19086;
int var_14 = -474339194;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
