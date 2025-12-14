#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3018494955726939822LL;
int var_2 = 1202637117;
unsigned short var_4 = (unsigned short)29154;
int var_5 = 1721177971;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-6;
long long int var_11 = -1657330385476106303LL;
unsigned long long int var_13 = 16322433144204076290ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)54625;
int var_16 = -2097989757;
unsigned int var_17 = 1509339962U;
unsigned short var_18 = (unsigned short)10042;
void init() {
}

void checksum() {
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
