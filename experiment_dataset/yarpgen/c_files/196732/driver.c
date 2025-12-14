#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)42316;
short var_7 = (short)-24266;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-21367;
int var_12 = -1533473211;
int var_13 = 137251695;
int var_18 = -482392509;
int zero = 0;
int var_19 = -2048699810;
unsigned char var_20 = (unsigned char)11;
_Bool var_21 = (_Bool)1;
int var_22 = -286829088;
unsigned int var_23 = 1860512544U;
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
