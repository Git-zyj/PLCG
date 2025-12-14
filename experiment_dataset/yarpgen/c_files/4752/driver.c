#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -316957443;
signed char var_1 = (signed char)98;
unsigned char var_4 = (unsigned char)131;
unsigned int var_5 = 2509498034U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)35032;
unsigned int var_9 = 3579383169U;
unsigned char var_11 = (unsigned char)32;
int zero = 0;
unsigned int var_12 = 2555223750U;
unsigned short var_13 = (unsigned short)15711;
unsigned int var_14 = 846568101U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
