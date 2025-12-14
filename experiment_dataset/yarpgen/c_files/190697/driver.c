#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5927;
unsigned char var_1 = (unsigned char)48;
unsigned short var_2 = (unsigned short)10808;
unsigned short var_3 = (unsigned short)23974;
unsigned long long int var_4 = 8320178529439507855ULL;
short var_5 = (short)-14667;
short var_6 = (short)-9498;
unsigned short var_7 = (unsigned short)30116;
short var_8 = (short)9251;
unsigned char var_9 = (unsigned char)86;
long long int var_10 = -2029627893845226793LL;
int zero = 0;
unsigned long long int var_11 = 5398752264585649764ULL;
long long int var_12 = 7187923585844078584LL;
unsigned long long int var_13 = 7569492505213982106ULL;
void init() {
}

void checksum() {
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
