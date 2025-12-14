#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)11;
unsigned int var_6 = 639432215U;
unsigned char var_7 = (unsigned char)58;
signed char var_8 = (signed char)-26;
unsigned char var_9 = (unsigned char)205;
int zero = 0;
short var_10 = (short)19197;
signed char var_11 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
