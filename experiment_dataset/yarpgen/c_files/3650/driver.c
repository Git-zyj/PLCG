#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21334;
unsigned short var_2 = (unsigned short)42853;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-15623;
unsigned short var_11 = (unsigned short)29035;
unsigned long long int var_12 = 3267220283417874613ULL;
unsigned short var_16 = (unsigned short)43036;
unsigned long long int var_17 = 15983149049716676356ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)59302;
unsigned char var_21 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
