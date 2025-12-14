#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_8 = (unsigned char)215;
unsigned char var_10 = (unsigned char)197;
unsigned long long int var_14 = 6782302490539600636ULL;
unsigned char var_19 = (unsigned char)13;
int zero = 0;
signed char var_20 = (signed char)-28;
unsigned long long int var_21 = 5600103560205711345ULL;
unsigned long long int var_22 = 3285787284547197835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
