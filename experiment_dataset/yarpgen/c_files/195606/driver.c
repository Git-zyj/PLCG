#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3814;
unsigned char var_2 = (unsigned char)240;
unsigned short var_3 = (unsigned short)43647;
unsigned int var_4 = 1043224184U;
unsigned long long int var_6 = 10482952467988941697ULL;
short var_8 = (short)6312;
int zero = 0;
int var_11 = 1948451023;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
