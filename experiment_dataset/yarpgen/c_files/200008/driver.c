#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17237;
unsigned char var_12 = (unsigned char)149;
unsigned long long int var_13 = 17720472405990132162ULL;
unsigned short var_15 = (unsigned short)38400;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_19 = (short)-32185;
unsigned char var_20 = (unsigned char)130;
unsigned char var_21 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
