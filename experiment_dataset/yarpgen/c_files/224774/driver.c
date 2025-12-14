#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)387;
signed char var_5 = (signed char)-116;
int var_10 = 149071483;
unsigned long long int var_11 = 14124148965211465319ULL;
int var_12 = -271193722;
int zero = 0;
int var_16 = -1917040091;
int var_17 = 1395287750;
unsigned int var_18 = 3842892166U;
unsigned long long int var_19 = 12716960266429233431ULL;
unsigned int var_20 = 3357079345U;
unsigned char var_21 = (unsigned char)206;
unsigned short var_22 = (unsigned short)62795;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
