#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1877920956;
unsigned int var_3 = 2086523780U;
_Bool var_8 = (_Bool)1;
int var_9 = 1182704230;
int var_10 = 1900290170;
unsigned char var_11 = (unsigned char)14;
short var_13 = (short)-31325;
short var_14 = (short)24823;
unsigned char var_15 = (unsigned char)150;
unsigned char var_18 = (unsigned char)154;
int zero = 0;
short var_20 = (short)-13960;
unsigned long long int var_21 = 1355417802008596206ULL;
long long int var_22 = -2819253227565662624LL;
unsigned short var_23 = (unsigned short)12211;
void init() {
}

void checksum() {
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
