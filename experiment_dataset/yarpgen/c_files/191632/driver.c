#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)22;
short var_7 = (short)-27379;
unsigned short var_8 = (unsigned short)16895;
long long int var_10 = 2398132559271199808LL;
signed char var_11 = (signed char)-127;
unsigned short var_12 = (unsigned short)17065;
unsigned long long int var_13 = 10473087063258512122ULL;
long long int var_14 = 7823381485943218880LL;
signed char var_18 = (signed char)-111;
int zero = 0;
long long int var_20 = -5330963052046222408LL;
unsigned int var_21 = 1996418323U;
void init() {
}

void checksum() {
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
