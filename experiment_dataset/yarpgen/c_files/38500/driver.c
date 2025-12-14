#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11562;
unsigned char var_1 = (unsigned char)243;
unsigned char var_3 = (unsigned char)153;
unsigned char var_5 = (unsigned char)85;
short var_8 = (short)-20057;
long long int var_10 = 5407036280699732571LL;
int zero = 0;
unsigned short var_11 = (unsigned short)58009;
unsigned short var_12 = (unsigned short)52616;
short var_13 = (short)30930;
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
