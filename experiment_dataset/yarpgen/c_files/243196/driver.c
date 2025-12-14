#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43126;
int var_4 = 1101676585;
int var_6 = 622694402;
int var_9 = 167510110;
unsigned short var_10 = (unsigned short)52230;
signed char var_12 = (signed char)-116;
signed char var_16 = (signed char)-69;
int zero = 0;
signed char var_18 = (signed char)64;
short var_19 = (short)-98;
long long int var_20 = -3863037741093829522LL;
unsigned char var_21 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
