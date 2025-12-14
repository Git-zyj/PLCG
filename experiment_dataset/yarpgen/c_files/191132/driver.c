#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
unsigned short var_2 = (unsigned short)60260;
unsigned short var_4 = (unsigned short)2418;
_Bool var_5 = (_Bool)0;
int var_7 = -592571919;
int var_9 = 1128909705;
unsigned char var_10 = (unsigned char)133;
int var_11 = 1225704920;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-12;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -6783409017712305861LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
