#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2031603083954414500LL;
unsigned long long int var_1 = 1107398983487727052ULL;
unsigned char var_4 = (unsigned char)201;
int var_5 = 274544227;
unsigned int var_7 = 3355009489U;
short var_8 = (short)-31324;
short var_9 = (short)-20517;
long long int var_10 = -4963438305087212569LL;
unsigned int var_12 = 1820219017U;
int var_13 = -641680261;
signed char var_16 = (signed char)91;
unsigned short var_17 = (unsigned short)3048;
unsigned short var_18 = (unsigned short)25311;
int zero = 0;
short var_19 = (short)28414;
int var_20 = -1217424963;
unsigned int var_21 = 2948814167U;
unsigned int var_22 = 596047947U;
unsigned int var_23 = 3810760759U;
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
