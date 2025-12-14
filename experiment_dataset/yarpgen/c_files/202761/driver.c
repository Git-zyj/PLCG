#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41665;
unsigned short var_1 = (unsigned short)6740;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)1130;
long long int var_7 = 3248466821491407217LL;
unsigned short var_8 = (unsigned short)24053;
unsigned short var_9 = (unsigned short)17036;
signed char var_10 = (signed char)-53;
int zero = 0;
long long int var_12 = 5243726462513972371LL;
unsigned short var_13 = (unsigned short)12205;
void init() {
}

void checksum() {
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
