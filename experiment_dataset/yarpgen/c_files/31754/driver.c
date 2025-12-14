#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)2743;
unsigned long long int var_4 = 2429199418279203200ULL;
unsigned short var_5 = (unsigned short)58700;
unsigned int var_7 = 3691277890U;
short var_8 = (short)8283;
int zero = 0;
unsigned char var_10 = (unsigned char)133;
unsigned int var_11 = 882695843U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
