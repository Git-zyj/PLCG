#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63115;
signed char var_3 = (signed char)123;
int var_4 = -466608794;
short var_5 = (short)-11013;
unsigned short var_7 = (unsigned short)46767;
short var_9 = (short)-27026;
unsigned char var_11 = (unsigned char)82;
unsigned char var_12 = (unsigned char)250;
unsigned short var_13 = (unsigned short)33466;
int zero = 0;
short var_15 = (short)14302;
unsigned int var_16 = 3278143644U;
unsigned char var_17 = (unsigned char)71;
short var_18 = (short)-9289;
int var_19 = -266558478;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
