#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33745;
unsigned short var_1 = (unsigned short)26546;
long long int var_2 = -1991335633945864134LL;
signed char var_4 = (signed char)-12;
signed char var_5 = (signed char)42;
signed char var_6 = (signed char)72;
unsigned char var_7 = (unsigned char)117;
signed char var_9 = (signed char)-50;
int zero = 0;
unsigned int var_10 = 608507033U;
short var_11 = (short)-13851;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)35;
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
