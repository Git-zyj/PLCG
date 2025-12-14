#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11100;
short var_5 = (short)-22408;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)65;
short var_9 = (short)-29803;
unsigned short var_11 = (unsigned short)64061;
int zero = 0;
unsigned short var_13 = (unsigned short)55197;
signed char var_14 = (signed char)-15;
void init() {
}

void checksum() {
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
