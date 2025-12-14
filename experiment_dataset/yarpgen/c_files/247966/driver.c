#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20824;
_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)28546;
unsigned int var_7 = 2265682405U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)39404;
unsigned short var_11 = (unsigned short)15785;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)34204;
unsigned char var_15 = (unsigned char)123;
void init() {
}

void checksum() {
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
