#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -400111525971251408LL;
signed char var_1 = (signed char)-2;
signed char var_2 = (signed char)-4;
signed char var_3 = (signed char)-84;
unsigned long long int var_7 = 8641002002915300311ULL;
long long int var_9 = -7824998207957478983LL;
int var_12 = 1463908623;
unsigned int var_13 = 3911519150U;
int var_16 = -327469265;
int zero = 0;
signed char var_17 = (signed char)107;
unsigned long long int var_18 = 2047058724064205566ULL;
unsigned long long int var_19 = 8125708834992989060ULL;
signed char var_20 = (signed char)104;
unsigned char var_21 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
