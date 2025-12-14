#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2572123522U;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)139;
short var_9 = (short)18763;
unsigned short var_11 = (unsigned short)53514;
short var_12 = (short)-19566;
_Bool var_13 = (_Bool)0;
int var_14 = -1012722681;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1899436805339089647ULL;
short var_18 = (short)-8196;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
