#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
unsigned char var_1 = (unsigned char)52;
int var_2 = -1220434158;
unsigned short var_3 = (unsigned short)20645;
unsigned char var_5 = (unsigned char)99;
int var_8 = 227165393;
short var_9 = (short)-27535;
unsigned char var_11 = (unsigned char)72;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)251;
unsigned int var_15 = 1009150027U;
unsigned long long int var_16 = 8442692481496641778ULL;
void init() {
}

void checksum() {
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
