#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
unsigned short var_2 = (unsigned short)56341;
unsigned short var_6 = (unsigned short)1042;
unsigned char var_8 = (unsigned char)28;
unsigned short var_10 = (unsigned short)14919;
unsigned char var_13 = (unsigned char)245;
unsigned short var_15 = (unsigned short)64185;
int zero = 0;
long long int var_17 = -4268137053577174366LL;
unsigned char var_18 = (unsigned char)248;
unsigned short var_19 = (unsigned short)47482;
long long int var_20 = -7071953738852404639LL;
unsigned char var_21 = (unsigned char)145;
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
