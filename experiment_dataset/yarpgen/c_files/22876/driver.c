#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
unsigned char var_2 = (unsigned char)138;
unsigned short var_3 = (unsigned short)52949;
_Bool var_4 = (_Bool)0;
int var_11 = -578514061;
int zero = 0;
short var_13 = (short)-8270;
unsigned int var_14 = 1969881834U;
unsigned char var_15 = (unsigned char)159;
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
