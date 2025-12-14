#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44835;
unsigned short var_2 = (unsigned short)35973;
unsigned short var_3 = (unsigned short)53337;
unsigned short var_4 = (unsigned short)62630;
unsigned short var_5 = (unsigned short)59955;
unsigned short var_8 = (unsigned short)24385;
unsigned short var_9 = (unsigned short)17703;
int zero = 0;
unsigned short var_10 = (unsigned short)54105;
unsigned short var_11 = (unsigned short)109;
unsigned short var_12 = (unsigned short)15885;
unsigned short var_13 = (unsigned short)56429;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
