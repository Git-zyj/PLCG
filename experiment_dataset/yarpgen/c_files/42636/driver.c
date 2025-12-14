#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20662;
long long int var_4 = 2628872623427647304LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)27757;
unsigned short var_18 = (unsigned short)34249;
int zero = 0;
unsigned char var_20 = (unsigned char)228;
long long int var_21 = 5559368211645920758LL;
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
