#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
unsigned long long int var_2 = 716221541594504746ULL;
signed char var_3 = (signed char)90;
long long int var_5 = -2758119744153868478LL;
long long int var_6 = 1079755835704136893LL;
signed char var_7 = (signed char)-23;
int var_9 = 59403741;
unsigned char var_10 = (unsigned char)8;
int zero = 0;
unsigned short var_12 = (unsigned short)64849;
unsigned int var_13 = 3834410096U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -2470456069339150541LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
