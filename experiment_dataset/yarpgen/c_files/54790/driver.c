#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35267;
unsigned int var_1 = 1498346640U;
unsigned long long int var_2 = 15342479389744553676ULL;
unsigned char var_3 = (unsigned char)148;
short var_5 = (short)-27688;
signed char var_7 = (signed char)-118;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1643407189U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-27540;
int zero = 0;
unsigned short var_14 = (unsigned short)20444;
unsigned char var_15 = (unsigned char)201;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
