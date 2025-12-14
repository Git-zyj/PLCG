#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1268415858;
long long int var_6 = -7246667987974476334LL;
unsigned int var_7 = 3827483821U;
unsigned long long int var_8 = 18065591851573021525ULL;
signed char var_10 = (signed char)-98;
unsigned char var_12 = (unsigned char)151;
int zero = 0;
unsigned char var_13 = (unsigned char)30;
long long int var_14 = -7703823044485491124LL;
signed char var_15 = (signed char)76;
unsigned int var_16 = 3053200965U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
