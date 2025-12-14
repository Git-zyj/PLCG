#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2054563447;
unsigned int var_1 = 905031028U;
int var_2 = -1405022675;
long long int var_5 = -641917558505440336LL;
unsigned short var_6 = (unsigned short)44572;
unsigned char var_11 = (unsigned char)121;
unsigned int var_12 = 1243812952U;
long long int var_14 = 4477821964045392600LL;
unsigned char var_15 = (unsigned char)130;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3742669243U;
int zero = 0;
unsigned short var_19 = (unsigned short)21073;
unsigned char var_20 = (unsigned char)183;
unsigned long long int var_21 = 3405954178543497327ULL;
short var_22 = (short)-28786;
unsigned short var_23 = (unsigned short)25909;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
